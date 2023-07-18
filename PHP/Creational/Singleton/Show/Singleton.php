<?php
namespace TheRayCode\Singleton;

class Singleton
{
    private static $instance;

    // Private constructor to prevent direct instantiation
    private function __construct() {}

    // Public static method to get the singleton instance
    public static function getInstance()
    {
        if (self::$instance === null) {
            self::$instance = new self();
        }

        return self::$instance;
    }

    // Example method to test the singleton instance
    public function showMessage()
    {
        echo "Hello, I am the Singleton instance!<br/>";
    }
}