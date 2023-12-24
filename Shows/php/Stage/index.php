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
echo "<br/><br/>";

$tree = new Composite();
$branch1 = new Composite();
$branch1->add(new Leaf());
$branch1->add(new Leaf());
$branch2 = new Composite();
$branch2->add(new Leaf());
$tree->add($branch1);
$tree->add($branch2);

function clientCode2(Component $component1, Component $component2)
{
    // ...

    if ($component1->isComposite()) {
        $component1->add($component2);
    }
    echo "RESULT: " . $component1->operation();

    // ...
}
echo "Client: I don't need to check the components classes even when managing the tree:<br/>";
clientCode2($tree, $simple);