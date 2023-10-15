<?php

require 'Facade.php';
require 'TextDecorator.php';
require 'BoldDecorator.php';
require 'ItalicDecorator.php';
require 'UnderlineDecorator.php';

$boldDecorator = new BoldDecorator();
$italicDecorator = new ItalicDecorator();
$underlineDecorator = new UnderlineDecorator();

$text = "Hello, World!";

$formattedText = Facade::decorateText($text, [$boldDecorator, $italicDecorator, $underlineDecorator]);

echo $formattedText;
