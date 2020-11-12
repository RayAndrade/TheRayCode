<?php
include_once ('Creator.php');
include_once ('ConcreteCreator1.php');
include_once ('ConcreteCreator2.php');
include_once ('Product.php');
include_once ('ConcreteProduct1.php');
include_once ('ConcreteProduct2.php');

function clientCode(Creator $creator)
{
    // ...
    echo "Client: I'm not aware of the creator's class, but it still works.<br/>"
        . $creator->someOperation();
    // ...
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */
echo "App: Launched with the ConcreteCreator1.<br/>";
clientCode(new ConcreteCreator1);
echo "<br/><br/>";

echo "App: Launched with the ConcreteCreator2.<br/>";
clientCode(new ConcreteCreator2);
