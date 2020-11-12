<?php
include_once ('AbstractClass.php');
include_once('Class1.php');
include_once('Class2.php');


/**
 * The client code calls the template method to execute the algorithm. Client
 * code does not have to know the concrete class of an object it works with, as
 * long as it works with objects through the interface of their base class.
 */
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
