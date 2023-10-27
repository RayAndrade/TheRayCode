<?php

interface Logger
{
    public function setNext(Logger $logger);
    public function logMessage($level, $message);
}