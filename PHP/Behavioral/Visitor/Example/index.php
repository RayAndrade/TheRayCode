<?php
include_once ('Component.php');
include_once ('ComponentA.php');
include_once ('ComponentB.php');
include_once ('Visitor.php');
include_once ('Visitor1.php');
include_once ('Visitor2.php');


/**
 * The client code can run visitor operations over any set of elements without
 * figuring out their concrete classes. The accept operation directs a call to
 * the appropriate operation in the visitor object.
 */
function clientCode(array $components, Visitor $visitor)
{
    // ...
    foreach ($components as $component) {
        $component->accept($visitor);
    }
    // ...
}

$components = [
    new ComponentA,
    new ComponentB,
];

echo "The client code works with all visitors via the base Visitor interface:<br/>";
$visitor1 = new Visitor1;
clientCode($components, $visitor1);
echo "<br/>";

echo "It allows the same client code to work with different types of visitors:<br/>";
$visitor2 = new Visitor2;
clientCode($components, $visitor2);