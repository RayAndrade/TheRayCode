<?php

namespace TheRayCode\Prototype;

require_once 'Original.php';

class ShallowPrototype extends Original
{
    public function __clone()
    {
        // Shallow copy: the "component" property is not cloned,
        // thus both the original object and the copied object
        // refer to the same component.
    }
}