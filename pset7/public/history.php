<?php

    // configuration
    require("../includes/config.php");

    $res = CS50::query("SELECT * FROM history WHERE user_id = ?", $_SESSION["id"]);
    //var_dump($res);
       
       
 render("history_data.php", ["title" => "Quote", "res" => $res]);
    

?>

