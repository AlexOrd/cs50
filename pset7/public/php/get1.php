<!DOCTYPE html>

<html>
    <head>
        <title>Contents of $_GET</title>
    </head>
    <body>
    
    <?php
    
        foreach($_GET as $key => $value)
        {
            print("<p>{$key} : {$value}</p>");
        }
    ?>
    
    </body>
</html>