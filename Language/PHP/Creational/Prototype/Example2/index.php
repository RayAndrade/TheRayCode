<?php
include_once 'ConcretePrototype1.php';
include_once 'ConcretePrototype2.php';

$prototype1 = new ConcretePrototype1("Prototype1", (object) ["property" => "value1"]);
$prototype2 = new ConcretePrototype2("Prototype2", (object) ["attribute" => "value2"]);

$shallowCopy1 = $prototype1->shallowCopy();
$deepCopy1 = $prototype1->deepCopy();

$shallowCopy2 = $prototype2->shallowCopy();
$deepCopy2 = $prototype2->deepCopy();

echo "Original Prototype1 Details: " . print_r($prototype1->getDetails(), true) . "<br>";
echo "Shallow Copy Prototype1 Details: " . print_r($shallowCopy1->getDetails(), true) . "<br>";
echo "Deep Copy Prototype1 Details: " . print_r($deepCopy1->getDetails(), true) . "<br>";

echo "Original Prototype2 Attributes: " . print_r($prototype2->getAttributes(), true) . "<br>";
echo "Shallow Copy Prototype2 Attributes: " . print_r($shallowCopy2->getAttributes(), true) . "<br>";
echo "Deep Copy Prototype2 Attributes: " . print_r($deepCopy2->getAttributes(), true) . "<br>";
