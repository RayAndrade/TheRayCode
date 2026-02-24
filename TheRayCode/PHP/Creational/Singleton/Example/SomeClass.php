<?php

namespace TheRayCode\Singleton;

class SomeClass
{
    private $singleton;

    public function __construct() {
        $this->singleton = Singleton::getInstance();
    }

    public function doSomething() {
        echo "Using the Singleton instance within SomeClass!";
    }
}
?>