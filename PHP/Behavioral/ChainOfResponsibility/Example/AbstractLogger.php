<?php
include_once "Logger.php";
abstract class AbstractLogger implements Logger
{
    protected $level;
    protected $nextLogger;

    public function setNext(Logger $logger) {
        $this->nextLogger = $logger;
        return $this;
    }

    public function logMessage($level, $message) {
        if($this->level <= $level) {
            $this->write($message);
        }
        if($this->nextLogger != null) {
            $this->nextLogger->logMessage($level, $message);
        }
    }

    protected abstract function write($message);
}