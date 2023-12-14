[up](./README.md)


The Bridge design pattern is a structural pattern used to decouple an abstraction from its implementation so that the two can vary independently. This pattern involves an interface which acts as a bridge between the abstraction and its implementation classes. It's particularly useful for scenarios where an abstraction can have multiple implementations.

To demonstrate the Bridge pattern in Java, let's consider a simple example of a TV remote control (the abstraction) and different types of TVs (the implementations). We'll create a hierarchy where the remote control can work with any TV type without being tightly coupled to a specific TV implementation.

Here's how you can structure the classes:

1. **`RemoteControl.java`**: An abstract class representing the abstraction. It contains a reference to a `TV` interface.

2. **`TV.java`**: An interface representing the implementer. This will be implemented by different types of TVs.

3. **`SonyTV.java`** and **`SamsungTV.java`**: Concrete implementations of the `TV` interface.

4. **`Main.java`**: Contains the main method to demonstrate the use of the Bridge pattern.

### Step-by-Step Implementation

#### 1. `TV.java` (Interface)
This interface declares methods that will be implemented by concrete TV classes.

```java
public interface TV {
    void on();
    void off();
    void tuneChannel(int channel);
}
```

#### 2. `SonyTV.java` (Concrete Implementation)
Implements the `TV` interface, representing a specific type of TV.

```java
public class SonyTV implements TV {
    public void on() {
        System.out.println("Sony TV: ON");
    }

    public void off() {
        System.out.println("Sony TV: OFF");
    }

    public void tuneChannel(int channel) {
        System.out.println("Sony TV: Tuned to channel " + channel);
    }
}
```

#### 3. `SamsungTV.java` (Concrete Implementation)
Another implementation of the `TV` interface.

```java
public class SamsungTV implements TV {
    public void on() {
        System.out.println("Samsung TV: ON");
    }

    public void off() {
        System.out.println("Samsung TV: OFF");
    }

    public void tuneChannel(int channel) {
        System.out.println("Samsung TV: Tuned to channel " + channel);
    }
}
```

#### 4. `RemoteControl.java` (Abstraction)
This abstract class represents a generic remote control. It holds a reference to a `TV` object and delegates the TV-related operations to it.

```java
public abstract class RemoteControl {
    protected TV tv;

    public RemoteControl(TV tv) {
        this.tv = tv;
    }

    public abstract void turnOn();
    public abstract void turnOff();
    public abstract void setChannel(int channel);
}
```

#### 5. `Main.java` (Demonstration)
This class demonstrates the use of the Bridge pattern.

```java
public class Main {
    public static void main(String[] args) {
        TV sonyTv = new SonyTV();
        RemoteControl sonyRemote = new ConcreteRemote(sonyTv);

        sonyRemote.turnOn();
        sonyRemote.setChannel(9);
        sonyRemote.turnOff();

        TV samsungTv = new SamsungTV();
        RemoteControl samsungRemote = new ConcreteRemote(samsungTv);

        samsungRemote.turnOn();
        samsungRemote.setChannel(5);
        samsungRemote.turnOff();
    }
}

class ConcreteRemote extends RemoteControl {
    public ConcreteRemote(TV tv) {
        super(tv);
    }

    public void turnOn() {
        tv.on();
    }

    public void turnOff() {
        tv.off();
    }

    public void setChannel(int channel) {
        tv.tuneChannel(channel);
    }
}
```

### Order of Creation
1. Create the `TV` interface.
2. Implement the `TV` interface in `SonyTV` and `SamsungTV`.
3. Create the `RemoteControl` abstract class.
4. Implement a concrete remote control in `ConcreteRemote`.
5. Use the `Main` class to demonstrate the pattern.

### Output When Running the Code
When you run the `Main.java`, you should see output demonstrating the interaction between the remote controls and their respective TVs:

```
Sony TV: ON
Sony TV: Tuned to channel 9
Sony TV: OFF
Samsung TV: ON
Samsung TV: Tuned to channel 5
Samsung TV: OFF
```

This output shows how the Bridge pattern allows different types of TVs to be controlled by a generic remote control without tightly coupling the remote control class to specific TV classes.
