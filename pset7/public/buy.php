<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        render("buy_form.php", ["title" => "Buy"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if (lookup($_POST["symbol"]) != true) {
            apologize("Error! Not correct symbol");
        }
        
        $stock = lookup($_POST["symbol"]);
        
        if (preg_match("/^\d+$/", $_POST["shares"]) != true) {
            apologize("Error! Buy must contains a non-negative integer");
        }
        
        $money = CS50::query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"])[0];
        $money = (float) $money["cash"];
        $buy_sum = $_POST["shares"] * $stock["price"];
        
        if ($buy_sum > $money) {
            apologize("You have no suck money!");    
        }
        
        
        //var_dump ($money, $buy_sum);
        //if ($)
        
        $res = CS50::query("SELECT symbol FROM portfolios WHERE user_id = ? AND symbol = ?", $_SESSION["id"], strtoupper ($_POST["symbol"]));
        if ($res == NULL) {
            CS50::query("INSERT INTO portfolios (user_id, symbol, shares) VALUES(?, ?, ?)",
                $_SESSION["id"], strtoupper ($_POST["symbol"]), $_POST["shares"]);
            
        }
        else {
            CS50::query("UPDATE portfolios SET shares = shares + ? WHERE user_id = ? AND symbol = ?", $_POST["shares"], $_SESSION["id"], strtoupper ($_POST["symbol"]));
        }
        
       CS50::query("UPDATE users SET cash = cash - ? WHERE id = ?", $buy_sum, $_SESSION["id"]); 
       
       // $shares = CS50::query("SELECT shares FROM portfolios WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $_POST["sym"])[0];
       
       // CS50::query("DELETE FROM portfolios WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $_POST["sym"]);
    
        CS50::query("INSERT INTO history (transaction, user_id, symbol, shares, price) VALUES('BUY', ?, ?, ?, ?)",
                $_SESSION["id"], strtoupper ($_POST["symbol"]), $_POST["shares"], $stock["price"]);
        
     redirect("/");
    }

?>

