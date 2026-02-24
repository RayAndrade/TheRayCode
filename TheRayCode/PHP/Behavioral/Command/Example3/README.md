[up](../README.md)

Certainly! The Command design pattern aims to encapsulate a request as an object, thereby allowing users to parameterize clients with different requests, queue requests, and log the operations. It also supports undoable operations. To accomplish this, the pattern typically involves three main types of objects:

1. **Command:** Declares an interface for executing an operation.
2. **ConcreteCommand:** Defines a binding between a Receiver object and an action.
3. **Invoker:** Asks the Command to carry out the request.
4. **Receiver:** Knows how to perform the operations associated with carrying out a request. Any class may serve as a Receiver.

Now, let's design a simple implementation of the Command pattern in PHP. We'll design a basic Light system, where the Light can be turned on or off using the Command pattern.

### 1. Command.php
```php
<?php
// Command interface declaration
interface Command {
    public function execute();
}
?>
```

This interface sets the blueprint for all commands that we'll define. Each command must have an `execute` method.

### 2. Light.php (Receiver)
```php
<?php
// This is our Receiver class. It will perform the real action
class Light {
    public function turnOn() {
        echo "Light is ON<br>";
    }

    public function turnOff() {
        echo "Light is OFF<br>";
    }
}
?>
```

The Light class (Receiver) has two methods, `turnOn` and `turnOff`, to control its state.

### 3. TurnOnLightCommand.php (ConcreteCommand)
```php
<?php
require_once 'Command.php';
require_once 'Light.php';

// This is our ConcreteCommand class
class TurnOnLightCommand implements Command {
    private $light;

    public function __construct(Light $light) {
        $this->light = $light;
    }

    public function execute() {
        $this->light->turnOn();
    }
}
?>
```

This class implements the Command interface and binds the action (turn on the light) with the receiver.

### 4. TurnOffLightCommand.php (ConcreteCommand)
```php
<?php
require_once 'Command.php';
require_once 'Light.php';

// Another ConcreteCommand class
class TurnOffLightCommand implements Command {
    private $light;

    public function __construct(Light $light) {
        $this->light = $light;
    }

    public function execute() {
        $this->light->turnOff();
    }
}
?>
```

This class binds the action (turn off the light) with the receiver.

### 5. RemoteControl.php (Invoker)
```php
<?php
require_once 'Command.php';

// This is our Invoker class
class RemoteControl {
    private $command;

    public function setCommand(Command $cmd) {
        $this->command = $cmd;
    }

    public function pressButton() {
        $this->command->execute();
    }
}
?>
```

The invoker `RemoteControl` has a method `setCommand` to assign a command and a method `pressButton` to execute the assigned command.

### 6. index.php (Client and Demo)
```php
<?php
require_once 'Light.php';
require_once 'TurnOnLightCommand.php';
require_once 'TurnOffLightCommand.php';
require_once 'RemoteControl.php';

// Create instances
$light = new Light();
$turnOn = new TurnOnLightCommand($light);
$turnOff = new TurnOffLightCommand($light);

$remote = new RemoteControl();

// Turn on the light using command pattern
$remote->setCommand($turnOn);
$remote->pressButton();

// Turn off the light using command pattern
$remote->setCommand($turnOff);
$remote->pressButton();
?>
```

This script sets up the command pattern, creates instances of our Light (Receiver), binds the commands (turn on and off) to the light, sets up the RemoteControl (Invoker), and executes the commands.

When you run `index.php` in the browser, you should see:

```
Light is ON
Light is OFF
```

### Order to Create the Classes:
1. Command.php (interface)
2. Light.php (Receiver)
3. TurnOnLightCommand.php & TurnOffLightCommand.php (ConcreteCommands)
4. RemoteControl.php (Invoker)
5. index.php (Client and Demo)

By following this sequence, you ensure that every time you create a new class or file, all the classes or interfaces it depends on are already defined.
