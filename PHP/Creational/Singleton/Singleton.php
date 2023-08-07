<?php

namespace TheRayCode\Singleton;

class Singleton
{
    private static $instance;

    private function __construct() {
        // private to prevent instance creation
    }

    public static function getInstance() {
        if (null === static::$instance) {
            static::$instance = new static();
        }

        return static::$instance;
    }

    public function someMethod() {
        return "I'm a singleton!";
    }

    private function __clone() {
        // prevent cloning
    }

    private function __wakeup() {
        // prevent unserializing
    }
}