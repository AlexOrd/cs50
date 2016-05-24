<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
         $symbols = CS50::query("SELECT symbol FROM portfolios WHERE user_id = ?", $_SESSION["id"]);
        
        render("sell_form.php", ["title" => "Sell", "symbols" => $symbols]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        
        $stock = lookup($_POST["sym"]);
      
        
        $shares = CS50::query("SELECT shares FROM portfolios WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $_POST["sym"])[0];
        
        CS50::query("UPDATE users SET cash = cash + ? WHERE id = ?", $shares["shares"] * $stock["price"],$_SESSION["id"]);
        CS50::query("DELETE FROM portfolios WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $_POST["sym"]);
        
        CS50::query("INSERT INTO history (transaction, user_id, symbol, shares, price) VALUES('SELL', ?, ?, ?, ?)",
                $_SESSION["id"], strtoupper ($_POST["sym"]), $shares["shares"], $stock["price"]);
        
        redirect("/");
    }

?>

