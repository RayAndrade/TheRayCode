<?php

namespace TheRayCode\Prototype;


require_once 'Original.php';
class DeepPrototype extends Original
{
    public function __clone()
    {
        // Deep copy: clone the "component" property,
        // so the original and copied objects do not share the same component.
        $this->component = clone $this->component;
    }
}