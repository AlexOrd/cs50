<?php

    /**
     * Renders template.
     */
    function render($template, $data = [])
    {
        $path = $template . ".php";
        var_dump($data);
        if (file_exists($path))
        {
            extract($data);
            require($path);
        }
    }

?>
