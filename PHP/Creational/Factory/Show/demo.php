<?php

include_once ('Creator.php');
include_once('Creator1.php');
include_once('Creator2.php');
include_once ('Product.php');
include_once('Product1.php');
include_once('Product2.php');

function clientCode(Creator $creator)
{
    echo "Client: I'm not aware of the creator's class, but it still works.<br/>"
        . $creator->someOperation();
}

echo "App: Launched with the Creator1.<br/>";
clientCode(new Creator1);
echo "<br/><br/>";

echo "App: Launched with the Creator2.<br/>";
clientCode(new Creator2);
echo "App: Launched with the Creator1.<br/>";