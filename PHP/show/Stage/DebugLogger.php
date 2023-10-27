<?php
include_once "AbstractLogger.php";
class DebugLogger extends AbstractLogger
{
    public function __construct() {
        $this->level = 2;
    }
    protected function write($message)
    {
        echo "Debug Logger: " . $message . "<br>";
    }
}