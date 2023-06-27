<?php

namespace TheRayCode\Prototype;

class Original
{
    public $primitive;
    public $component;

    public function __construct($primitive, $component)
    {
        $this->primitive = $primitive;
        $this->component = $component;
    }
}