<?php
include_once 'HomePage.php';
include_once 'AboutPage.php';

$homePage = new HomePage();
$aboutPage = new AboutPage();

echo "<h2>Home Page</h2>";
$homePage->render();

echo "<hr>";

echo "<h2>About Page</h2>";
$aboutPage->render();
