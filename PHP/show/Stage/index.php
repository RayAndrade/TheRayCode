<?php
include_once ('AbstractClass.php');
include_once('Class1.php');
include_once('Class2.php');

function clientCode(AbstractClass $class)
{
    // ...
    $class->templateMethod();
    // ...
}
echo "Same client code can work with different subclasses:<br/>";
clientCode(new Class1);
echo "\n";

echo "Same client code can work with different subclasses:<br/>";
clientCode(new Class2);
