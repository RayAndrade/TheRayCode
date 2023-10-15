<?php
require 'Facade.php';
require 'TextDecorator.php';
require 'BoldDecorator.php';
require 'ItalicDecorator.php';
require 'UnderlineDecorator.php';

// Create some text
$text = "Hello, World!";

// Create decorators
$boldDecorator = new BoldDecorator();
$italicDecorator = new ItalicDecorator();
$underlineDecorator = new UnderlineDecorator();

// Use the Facade to apply decorators
$formattedText = Facade::decorateText($text, [$boldDecorator, $italicDecorator, $underlineDecorator]);

// Output the formatted text
echo $formattedText;

