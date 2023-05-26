<?php
// index.php

include 'Prototype.php';

$prototype = new Prototype();
$prototype->setTitle('My Book');
$prototype->setAuthor('John Doe');

$newBook = clone $prototype;
$newBook->setTitle('My New Book');

echo $prototype->getTitle() . ' by ' . $prototype->getAuthor() . PHP_EOL;
echo $newBook->getTitle() . ' by ' . $newBook->getAuthor() . PHP_EOL;
