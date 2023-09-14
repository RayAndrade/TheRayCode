<?php

namespace TheRayCode\Singleton;

class Singleton
{
    private static $instance = null;

    // The constructor is private so that the object can't be instantiated from outside
    private function __construct() { }

    // Cloning is disabled to ensure the uniqueness of the instance
    private function __clone() { }

    // This method returns the singleton instance of this class
    public static function getInstance() {
        if (self::$instance === null) {
            self::$instance = new Singleton();
        }
        return self::$instance;
    }
}
?>