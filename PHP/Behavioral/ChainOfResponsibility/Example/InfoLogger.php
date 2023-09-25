<?php
include_once "AbstractLogger.php";
class InfoLogger extends AbstractLogger
{
    public function __construct() {
        $this->level = 1;
    }

    protected function write($message)
    {
        echo "Info Logger: " . $message . "<br>";
    }
}