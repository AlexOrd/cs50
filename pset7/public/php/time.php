<!DOCTYPE html>

<?php
    // set the timezone
    date_default_timezone_set('US/Eastern');
    
    // just extract the time from date/time
    $time = date('H:i:s', time());
?>

<html>
    <head>
        <title>Current Time in Cambridge</title>
    </head>
    <body>
        The current time in Cambridge is <?= $time ?>.
    </body>
</html>