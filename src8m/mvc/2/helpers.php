<?php

    /**
     * Renders footer.
     */
    function renderFooter($data = [])
    {
        var_dump(extract($data));
        require("footer.php");
    }

    /**
     * Renders header.
     */
    function renderHeader($data = [])
    {
        extract($data);
        require("header.php");
    }

?>
