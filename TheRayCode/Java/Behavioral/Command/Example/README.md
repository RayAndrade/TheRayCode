[up](../README.md)

The Command design pattern is a behavioral design pattern that turns a request into a stand-alone object that contains all information about the request. This transformation allows you to parameterize methods with different requests, delay or queue a request's execution, and support undoable operations. It's particularly useful in GUIs, transactional systems, and for operations that need to be undone.

Let's break down the implementation of the Command pattern with a simple example that follows the naming conventions from the book "Design Patterns" by Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides, commonly referred to as the Gang of Four (GoF). We'll create a simple application that simulates a remote control turning on a light. 

The structure includes:
1. **Command Interface** (`Command.java`): An interface for executing operations.
2. **ConcreteCommand Class** (`LightOnCommand.java`): Implements the Command interface and defines the binding between a Receiver object and an action.
3. **Receiver Class** (`Light.java`): Performs the actual work; the logic of the action being performed.
4. **Invoker Class** (`RemoteControl.java`): Asks the command to carry out the request.
5. **Client Class** (`Main.java`): The client creates a ConcreteCommand object and sets its receiver.

### Step 1: Command Interface (`Command.java`)
```java
public interface Command {
    void execute();
}
```
This interface declares a method for executing a command. Each concrete command will implement this interface.

### Step 2: Receiver Class (`Light.java`)
```java
public class Light {
    public void on() {
        System.out.println("Light is on");
    }

    public void off() {
        System.out.println("Light is off");
    }
}
```
`Light` is a receiver class with `on()` and `off()` methods to simulate turning a light on and off. The actual work of the command gets done here.

### Step 3: ConcreteCommand Class (`LightOnCommand.java`)
```java
public class LightOnCommand implements Command {
    private Light light;

    public LightOnCommand(Light light) {
        this.light = light;
    }

    @Override
    public void execute() {
        light.on();
    }
}
```
`LightOnCommand` is a concrete command that implements the `Command` interface and defines the binding between the `Light` action and the action to be performed, i.e., turning the light on.

### Step 4: Invoker Class (`RemoteControl.java`)
```java
public class RemoteControl {
    private Command command;

    public void setCommand(Command command) {
        this.command = command;
    }

    public void pressButton() {
        command.execute();
    }
}
```
`RemoteControl` acts as an invoker. It's linked to the command, and by calling `pressButton()`, it executes the current command's `execute()` method.

### Step 5: Client Class (`Main.java`)
```java
public class Main {
    public static void main(String[] args) {
        Light light = new Light(); // Create receiver
        Command lightOn = new LightOnCommand(light); // Create command and associate with receiver
        RemoteControl remote = new RemoteControl(); // Create invoker
        remote.setCommand(lightOn); // Set the command
        remote.pressButton(); // Execute the command
    }
}
```
In `Main`, we tie everything together: create a `Light` object (receiver), create a `LightOnCommand` object and associate it with the light, create a `RemoteControl` (invoker), set the command for the remote, and finally, press the button to execute the command.

### Order of Creation
1. **Command Interface** (`Command.java`): To define the command interface first as it's the foundation.
2. **Receiver Class** (`Light.java`): It's essential to know what operations can be performed.
3. **ConcreteCommand Class** (`LightOnCommand.java`): After defining operations, we specify the command that performs an operation.
4. **Invoker Class** (`RemoteControl.java`): With commands defined, we can create the invoker that uses these commands.
5. **Client Class** (`Main.java`): Finally, tie everything together in the client class.

### Expected Output
When you run the `Main.java` file, you should see the following output indicating that the command pattern successfully executed the action of turning the light on:
```
Light is on
```
This simple example demonstrates the Command design pattern's ability to encapsulate a request as an object, allowing for parameterization and queuing of requests, and providing additional functionalities such as undoable operations.
