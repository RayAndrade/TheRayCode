<?php
include_once 'AbstractPage.php';
class AboutPage extends AbstractPage
{

    protected function body()
    {
        echo "<p>This is the about page body content.</p>";
    }
}