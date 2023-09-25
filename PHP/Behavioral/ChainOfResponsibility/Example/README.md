[up](../README.md)

**Chain Of Responsibility** Design Pattern:

The Chain of Responsibility design pattern decouples the sender from receiver by allowing multiple objects to handle a request. This pattern creates a chain of objects. The request moves along the chain until an object handles it or it reaches the end of the chain.

Let's implement the Chain of Responsibility pattern with a simple example: Suppose we have an error logging system that has three levels of logging: `INFO`, `DEBUG`, and `ERROR`. We'll use the Chain of Responsibility pattern to handle and display logs based on their level.

### Step 1: Handler Interface (`Logger.php`)
This is the base interface that defines how log messages should be handled.

```php
<?php
// Logger.php

interface Logger {
    public function setNext(Logger $logger);
    public function logMessage($level, $message);
}
?>
```

### Step 2: Concrete Handler (`AbstractLogger.php`)
This abstract class provides the default implementation for the logMessage and implements chaining behavior.

```php
<?php
// AbstractLogger.php
include_once "Logger.php";

abstract class AbstractLogger implements Logger {
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
?>
```

### Step 3: Concrete Handlers (`InfoLogger.php`, `DebugLogger.php`, `ErrorLogger.php`)
These classes will implement the actual logging behavior based on their level.

```php
<?php
// InfoLogger.php
include_once "AbstractLogger.php";

class InfoLogger extends AbstractLogger {
    public function __construct() {
        $this->level = 1;
    }

    protected function write($message) {
        echo "Info Logger: " . $message . "<br>";
    }
}
?>

<?php
// DebugLogger.php
include_once "AbstractLogger.php";

class DebugLogger extends AbstractLogger {
    public function __construct() {
        $this->level = 2;
    }

    protected function write($message) {
        echo "Debug Logger: " . $message . "<br>";
    }
}
?>

<?php
// ErrorLogger.php
include_once "AbstractLogger.php";

class ErrorLogger extends AbstractLogger {
    public function __construct() {
        $this->level = 3;
    }

    protected function write($message) {
        echo "Error Logger: " . $message . "<br>";
    }
}
?>
```

### Step 4: Demo (`index.php`)
In this file, you will create the chain of loggers and demonstrate how logging works based on different levels.

```php
<?php
// index.php

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
?>
```

When you open `index.php` in a browser, you should see:

```
Info Logger: This is an informational message.
Debug Logger: This is a debug message.
Error Logger: This is an error message.
```

The handlers ensure that the messages are passed and handled according to the specified log levels. In the example, since we have started the chain with `InfoLogger`, all log levels (`INFO`, `DEBUG`, and `ERROR`) will be processed and displayed in the browser.
