<?php

namespace TheRayCode\Singleton;

class Singleton
{
    private static ?Singleton $instance = null;

    protected function __construct()
    {
    }

    public static function getInstance(): Singleton
    {
        if (self::$instance === null)
        {
            self::$instance = new static();
        }

        return self::$instance;
    }

    private function __clone()
    {
    }

    private function __wakeup()
    {
    }
}
