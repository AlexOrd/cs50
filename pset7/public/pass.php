<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
        render("pass_form.php", ["title" => "Change password"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // validate submission
        if (empty($_POST["password"])) {
            apologize("You must provide your password.");
        }
        else if (empty($_POST["new_pas"])) {
            apologize("You must provide your new password.");
        }
        else if (empty($_POST["confirm"])) {
            apologize("You must confirm your new password.");
        }

        $result = CS50::query("SELECT hash FROM users WHERE id = ?", $_SESSION["id"])[0];
        var_dump($result);
        
        if (password_verify($_POST["password"], $result["hash"])) {
            CS50::query("UPDATE users SET hash = ? WHERE id = ?", password_hash($_POST["new_pas"], PASSWORD_DEFAULT), $_SESSION["id"]);
            printf("Password change correct! :)");
        }
        else {
            apologize("Wrong old password");
        }
        
        redirect("/");
        
    }

?>

