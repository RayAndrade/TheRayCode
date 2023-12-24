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




