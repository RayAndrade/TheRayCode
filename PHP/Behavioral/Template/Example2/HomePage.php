<?php
include_once 'AbstractPage.php';

class HomePage extends AbstractPage
{

    protected function body()
    {
        echo "<p>This is the homepage body content.</p>";
    }
}