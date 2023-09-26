[up](../README.md)

The Command pattern is a behavioral design pattern that turns a request into a stand-alone object that contains information about the request, such as its method and arguments. This allows code to be decoupled, making it more modular, easier to test, and more scalable.

For this example, I'll implement a basic light switch system where a `Light` can be turned on or off using the Command pattern.

**Step 1: Create the Command Interface**
This is the core of the Command pattern. All commands will implement this interface.

_File: CommandInterface.php_
```php
<?php

interface CommandInterface {
    public function execute();
}
```

**Step 2: Create the Concrete Commands**
These classes will implement the CommandInterface and execute the real action.

_File: TurnOnLightCommand.php_
```php
<?php

require_once 'CommandInterface.php';

class TurnOnLightCommand implements CommandInterface {
    private $light;

    public function __construct($light) {
        $this->light = $light;
    }

    public function execute() {
        $this->light->turnOn();
    }
}
```

_File: TurnOffLightCommand.php_
```php
<?php

require_once 'CommandInterface.php';

class TurnOffLightCommand implements CommandInterface {
    private $light;

    public function __construct($light) {
        $this->light = $light;
    }

    public function execute() {
        $this->light->turnOff();
    }
}
```

**Step 3: Create the Receiver Class**
This is the class that will have the real implementation of the action. In our case, the `Light` class.

_File: Light.php_
```php
<?php

class Light {
    public function turnOn() {
        echo "Light is ON<br>";
    }

    public function turnOff() {
        echo "Light is OFF<br>";
    }
}
```

**Step 4: Create the Invoker Class**
This is the class that triggers the command.

_File: RemoteControl.php_
```php
<?php

class RemoteControl {
    private $command;

    public function setCommand(CommandInterface $command) {
        $this->command = $command;
    }

    public function pressButton() {
        $this->command->execute();
    }
}
```

**Step 5: Demo the Command Pattern**

_File: index.php_
```php
<?php

require_once 'CommandInterface.php';
require_once 'TurnOnLightCommand.php';
require_once 'TurnOffLightCommand.php';
require_once 'Light.php';
require_once 'RemoteControl.php';

// Create a new Light instance
$light = new Light();

// Create commands
$turnOn = new TurnOnLightCommand($light);
$turnOff = new TurnOffLightCommand($light);

// Create the remote control and set the command to TurnOn
$remote = new RemoteControl();
$remote->setCommand($turnOn);
$remote->pressButton();

// Set the command to TurnOff
$remote->setCommand($turnOff);
$remote->pressButton();
```

When you open `index.php` in your browser, you should see:
```
Light is ON
Light is OFF
```

**Explanation**:

- `CommandInterface`: Represents the command interface with the `execute` method.
  
- `TurnOnLightCommand` and `TurnOffLightCommand`: These are concrete commands. They hold a reference to the light and call its methods.

- `Light`: This is the receiver that does the actual work.

- `RemoteControl`: This acts as the invoker. It doesn't know about the concrete command or the receiver. It just triggers the command it's given.

The Command pattern is great because it allows you to decouple classes that invoke operations from classes that perform the operation.
