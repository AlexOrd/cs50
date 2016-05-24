<?php

    /**
     * Renders template.
     */
    function render($template, $data = [])
    {
        $path = __DIR__ . "/../templates/" . $template . ".php";
        $path2 = __DIR__;
        var_dump($path2, $path);
        if (file_exists($path))
        {
            extract($data);
            require($path);
        }
    }

?>
