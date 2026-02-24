<?php
include_once 'Article.php';
include_once 'Video.php';
include_once 'DarkTheme.php';
include_once 'LightTheme.php';

$darkTheme = new DarkTheme();
$lightTheme = new LightTheme();

$darkArticle = new Article("Design Patterns", $darkTheme);
$lightVideo = new Video("Bridge Pattern Tutorial", $lightTheme);

echo $darkArticle->view() . "<br>";
echo $lightVideo->view();
