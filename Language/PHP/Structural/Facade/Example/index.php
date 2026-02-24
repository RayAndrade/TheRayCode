<?php
include_once ('Facade.php');
include_once('SubsystemA.php');
include_once('SubsystemB.php');

function clientCode(Facade $facade)
{
    // ...

    echo $facade->operation();

    // ...
}

/**
 * The client code may have some of the subsystem's objects already created. In
 * this case, it might be worthwhile to initialize the Facade with these objects
 * instead of letting the Facade create new instances.
 */
$subsystemA = new SubsystemA;
$subsystemB = new SubsystemB;
$facade = new Facade($subsystemA, $subsystemB);
clientCode($facade);
