The Command pattern is a behavioral design pattern that turns a request into a stand-alone object that contains information about the request. This decoupling allows the sender to be decoupled from the receiver. This is commonly used in things like "undo" functionality or to queue up operations.

Here's an example of how you might implement the Command pattern in Java:

1. **Command.java**: This is the command interface that declares an execute method.
```java
package TheRayCode.Command;

public interface Command {
    void execute();
}
```

2. **Light.java**: This is the receiver class.
```java
package TheRayCode.Command;

public class Light {
    public void on() {
        System.out.println("Light is ON");
    }
    
    public void off() {
        System.out.println("Light is OFF");
    }
}
```

3. **LightOnCommand.java**: This is a concrete command that implements `Command` and triggers a method to turn the light on.
```java
package TheRayCode.Command;

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

4. **LightOffCommand.java**: This is another concrete command to turn the light off.
```java
package TheRayCode.Command;

public class LightOffCommand implements Command {
    private Light light;

    public LightOffCommand(Light light) {
        this.light = light;
    }

    @Override
    public void execute() {
        light.off();
    }
}
```

5. **RemoteControl.java**: This is our invoker. It doesn't know anything about the specific command it's executing, just that it can be executed.
```java
package TheRayCode.Command;

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

6. **Demo.java**: This is our client code to demonstrate how the Command pattern works.
```java
package TheRayCode.Command;

public class Demo {
    public static void main(String[] args) {
        // Receiver
        Light light = new Light();
        
        // Concrete Commands
        LightOnCommand lightOn = new LightOnCommand(light);
        LightOffCommand lightOff = new LightOffCommand(light);
        
        // Invoker
        RemoteControl remoteControl = new RemoteControl();
        
        // Turn the light on using the command pattern
        remoteControl.setCommand(lightOn);
        remoteControl.pressButton();

        // Turn the light off using the command pattern
        remoteControl.setCommand(lightOff);
        remoteControl.pressButton();
    }
}
```

**Explanation**:

- **Command** is an interface for executing an operation.
- **Light** is the Receiver class, which performs the real action.
- **LightOnCommand** and **LightOffCommand** are concrete commands, encapsulating the command to execute and its parameters.
- **RemoteControl** acts as the invoker. It asks the command to carry out the request.
- **Demo** class glues everything together. It creates an instance of the receiver, then creates command objects, attaching them to the receiver. Then, it uses the invoker (RemoteControl) to execute these commands.

When you run the `Demo` class, you'll observe the light turning on and off through the commands given to the remote control.
