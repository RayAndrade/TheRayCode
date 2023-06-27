<?php
namespace TheRayCode\Prototype;

require_once 'Original.php';
require_once 'ShallowPrototype.php';
require_once 'DeepPrototype.php';

// Create a new object
$component = new stdClass();
$original = new Original("original", $component);

// Create a shallow copy
$shallowCopy = clone $original;
echo "Shallow copy component identity: " . spl_object_id($shallowCopy->component) . "<br/>";

// Create a deep copy
$deepCopy = clone $original;
echo "Deep copy component identity: " . spl_object_id($deepCopy->component) . "<br/>";
