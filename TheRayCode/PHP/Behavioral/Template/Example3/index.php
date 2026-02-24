<?php

include_once 'SpiderMan.php';
include_once 'WonderWoman.php';

$spiderMan = new SpiderMan();
$wonderWoman = new WonderWoman();

echo "<h2>SpiderMan</h2>";
$spiderMan->describeHero();

echo "<hr>";

echo "<h2>Wonder Woman</h2>";
$wonderWoman->describeHero();