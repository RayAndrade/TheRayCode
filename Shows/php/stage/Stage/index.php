<?php

include_once ('Composite.php');
include_once ('Leaf.php');

function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}

$simple = new Leaf();
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "<br/>";

$tree = new Composite();
$branch1 = new Composite();

$branch1->add(new Leaf());
$branch1->add(new Leaf());
$branch2 = new Composite();
$branch2->add(new Leaf());

$tree->add($branch1);
$tree->add($branch2);
echo "Client: Now I've got a composite tree:<br/>";
clientCode($tree);
echo "<br/>";
