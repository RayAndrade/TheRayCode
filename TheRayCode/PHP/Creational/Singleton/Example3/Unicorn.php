<?php

class Unicorn
{
    private static $instance;
    private $name;

    // Constructor is made private to prevent the use of "new"
    private function __construct($name) {
        $this->name = $name;
    }

    // Cloning and unserialization methods are made private to prevent cloning or unserialization of an instance
    private function __clone() {}

    private function __wakeup() {}

    // The method to access the singleton instance
    public static function getInstance($name = "Mystical Unicorn")
    {
        if (!isset(self::$instance)) {
            self::$instance = new Unicorn($name);
        }

        return self::$instance;
    }

    public function getName() {
        return $this->name;
    }
}