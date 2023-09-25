<?php
include_once "AbstractLogger.php";
class ErrorLogger extends AbstractLogger
{
    public function __construct() {
        $this->level = 3;
    }

    protected function write($message)
    {
        echo "Error Logger: " . $message . "<br>";
    }
}