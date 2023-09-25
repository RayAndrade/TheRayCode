<?php
include_once "Fly.php";
include_once "Spider.php";
// Include other creatures here...

// Create the chain of creatures
$fly = new Fly();
$spider = new Spider();

$fly->setNext($spider);
// Continue chaining other creatures...

// Demonstrate swallowing sequence
$fly->swallow();