<?php

include_once "InfoLogger.php";
include_once "DebugLogger.php";
include_once "ErrorLogger.php";

// Create the chain of loggers
$errorLogger = new ErrorLogger();
$debugLogger = new DebugLogger();
$infoLogger = new InfoLogger();

$infoLogger->setNext($debugLogger)->setNext($errorLogger);

// Demonstrate logging
$infoLogger->logMessage(1, "This is an informational message.");
$infoLogger->logMessage(2, "This is a debug message.");
$infoLogger->logMessage(3, "This is an error message.");