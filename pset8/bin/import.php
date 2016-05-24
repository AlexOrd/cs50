#!/usr/bin/env php
<?php
    if ($argv == NULL) {
        printf("Error");
    }

    $filename = $argv[1];
    
    if (file_exists($filename)) {
        echo "The file $filename exists";
    } else {
        echo "The file $filename does not exist";

    $handle = fopen($argv[1], "r");
//     $quer = <<<SQL
//     INSERT INTO `places`
//     (`country_code`,
//     `postal_code`,
//     `place_name`,
//     `admin_name1`,
//     `admin_code1`,
//     `admin_name2`,
//     `admin_code2`,
//     `admin_name3`,
//     `admin_code3`,
//     `latitude`,
//     `longitude`,
//     `accuracy`)
//     VALUES
//     (?,?,?,?,?,?,?,?,?,?,?,?)
// SQL;

//printf ($quer);
    // $row = 1;
    // if (($handle = fopen($argv[1], "r")) !== FALSE) {
    //     while (($data = fgetcsv($handle, 0, "\t")) !== FALSE) {
    //         CS50::query(quer,
    //         data[0],
    //         data[1],
    //         data[2],
    //         data[3],
    //         data[4],
    //         data[5],
    //         data[6],
    //         data[7],
    //         data[8],
    //         data[9],
    //         data[10],
    //         data[11]);
                
    //     }
        
    //     fclose($handle);
    // }
    
    
    

?>