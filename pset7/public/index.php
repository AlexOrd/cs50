<?php

    // configuration
    require("../includes/config.php"); 
    
    $rows = CS50::query("SELECT symbol, shares FROM portfolios WHERE user_id = ?", $_SESSION["id"]);
    $money = CS50::query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"])[0];
    
    $positions = [];
    $total_m = 0;
    
    foreach ($rows as $row) {
        $stock = lookup($row["symbol"]);
        if ($stock !== false) {
            $positions[] = [
                "name" => $stock["name"],
                "price" => $stock["price"],
                "shares" => $row["shares"],
                "symbol" => $row["symbol"],
                "total" => $row["shares"] * $stock["price"]
                ];
        }
        $total_m = $total_m + $row["shares"] * $stock["price"];
    }
    // render portfolio
    render("portfolio.php", ["positions" => $positions, "title" => "Portfolio", "total_m" => $total_m, "money" => $money["cash"]]);

?>
