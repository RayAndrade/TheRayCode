[top](./README.md)



The Bridge design pattern is a structural pattern used to decouple an abstraction from its implementation so that the two can vary independently. This pattern involves an interface which acts as a bridge between the abstraction and its implementation classes.

In this example, we'll create a simple scenario where we have different types of devices (like a TV and a Radio) and different types of remote controls. The Bridge pattern will allow us to use any remote control with any device without binding them permanently in the code.

Here's how we can structure our example:

1. **Device Interface (`Device.java`)**: This interface declares the common operations for all devices.

2. **Concrete Device Classes (`TV.java`, `Radio.java`)**: These classes implement the `Device` interface.

3. **Remote Control Interface (`RemoteControl.java`)**: This is an abstraction that will use a `Device`.

4. **Concrete Remote Control Classes (`BasicRemote.java`, `AdvancedRemote.java`)**: These classes implement the `RemoteControl` interface.

5. **Main Class (`Main.java`)**: To demonstrate the usage of the pattern.

### 1. Device Interface (`Device.java`)

```java
public interface Device {
    void turnOn();
    void turnOff();
    void setVolume(int percent);
    // Other device-specific methods can be added here
}
```

### 2. Concrete Device Classes

#### `TV.java`

```java
public class TV implements Device {
    private int volume;

    @Override
    public void turnOn() {
        System.out.println("TV turned on.");
    }

    @Override
    public void turnOff() {
        System.out.println("TV turned off.");
    }

    @Override
    public void setVolume(int percent) {
        this.volume = percent;
        System.out.println("TV volume set to " + this.volume + "%");
    }

    // Additional TV-specific methods can be added here
}
```

#### `Radio.java`

```java
public class Radio implements Device {
    private int volume;

    @Override
    public void turnOn() {
        System.out.println("Radio turned on.");
    }

    @Override
    public void turnOff() {
        System.out.println("Radio turned off.");
    }

    @Override
    public void setVolume(int percent) {
        this.volume = percent;
        System.out.println("Radio volume set to " + this.volume + "%");
    }

    // Additional Radio-specific methods can be added here
}
```

### 3. Remote Control Interface (`RemoteControl.java`)

```java
public abstract class RemoteControl {
    protected Device device;

    public RemoteControl(Device device) {
        this.device = device;
    }

    public abstract void togglePower();
    public abstract void volumeUp();
    public abstract void volumeDown();
}
```

### 4. Concrete Remote Control Classes

#### `BasicRemote.java`

```java
public class BasicRemote extends RemoteControl {

    public BasicRemote(Device device) {
        super(device);
    }

    @Override
    public void togglePower() {
        System.out.println("Basic remote: power toggle");
        // Implementation code for power toggle
    }

    @Override
    public void volumeUp() {
        System.out.println("Basic remote: volume up");
        // Implementation code for volume up
    }

    @Override
    public void volumeDown() {
        System.out.println("Basic remote: volume down");
        // Implementation code for volume down
    }
}
```

#### `AdvancedRemote.java`

```java
public class AdvancedRemote extends RemoteControl {

    public AdvancedRemote(Device device) {
        super(device);
    }

    @Override
    public void togglePower() {
        System.out.println("Advanced remote: power toggle");
        // Implementation code for power toggle
    }

    @Override
    public void volumeUp() {
        System.out.println("Advanced remote: volume up");
        // Implementation code for volume up
    }

    @Override
    public void volumeDown() {
        System.out.println("Advanced remote: volume down");
        // Implementation code for volume down
    }

    // Additional methods specific to the advanced remote can be added here
}
```

### 5. Main Class (`Main.java`)

```java
public class Main {
    public static void main(String[] args) {
        Device tv = new TV();
        RemoteControl basicRemote = new BasicRemote(tv);
        basicRemote.togglePower();

        Device radio = new Radio();
        RemoteControl advancedRemote = new AdvancedRemote(radio);
        advancedRemote.togglePower();
    }
}
```

### Order of Creation

1. Start with the `Device` interface since it defines the core functionality for devices.
2. Create the concrete device classes `TV` and `Radio`.
3. Define the `RemoteControl` abstract class as it represents the abstraction layer.
4. Implement the concrete remote control classes `BasicRemote` and `AdvancedRemote`.
5. Finally, use the `Main` class to demonstrate the Bridge pattern.

### Expected Output

When you run the `Main.java`, you should see console output indicating the interactions between the remotes and their respective devices, like turning on the TV and the radio. The exact output will depend on the implementation details in the `togglePower`, `volumeUp`, and `volumeDown` methods of the remote classes.
