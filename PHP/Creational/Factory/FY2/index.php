<?php
include_once ('Creator.php');
include_once('Creator1.php');
include_once('Creator2.php');
include_once ('Product.php');
include_once('Product1.php');
include_once('Product2.php');

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
echo "App: Launched with the Creator1.<br/>";
clientCode(new Creator1);
echo "<br/><br/>";

echo "App: Launched with the Creator2.<br/>";
clientCode(new Creator2);
