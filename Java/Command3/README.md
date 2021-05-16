# TheRayCode
## Command pattern java

The command pattern is a behavioural design pattern in which an object is used to represent and encapsulate all the information needed to call a method at a later time.
This information includes the method name, the object that owns the method and values for the method parameters.

```java
public interface ElectronicDevice {
    public void on();
    public void off();
    public void volumeUp();
    public void volumenDown();
}
```

```java
public class Television implements ElectronicDevice {
    private int volume = 0;
    
    public void on() {
        System.out.println("TV is on");
    }

    public void off() {
        System.out.println("TV is off");
    }
    
    @Override
    public void volumeUp() {
        volume++;
        System.out.println("TV Volume is at: " + volume);
    }
    
    @Override
    public void volumenDown() {
        volume--;
        System.out.println("TV Volume is at: " + volume);
    }
}
```

```java
public interface Command {
    public void execute();
    // Added
    public void undo();
}
```

```java
public class TurnTVOn implements Command {
    ElectronicDevice theDevice;
    
    public TurnTVOn(ElectronicDevice newDevice){
        theDevice = newDevice;
    }
    
    @Override
    public void execute() {
        theDevice.on();
    }
    
    @Override // Added
    public void undo() {
        theDevice.off();
    }
}
```

```java
public class TurnTVOff implements Command {
    ElectronicDevice theDevice;
    
    public TurnTVOff(ElectronicDevice newDevice){
        theDevice = newDevice;
    }
    
    @Override
    public void execute() {
        theDevice.off();
    }

    // Used if you want to allow for undo
    // Do the opposite of execute()
    public void undo() {
        theDevice.on();
    }

}
```

```java
public class TurnTVUp implements Command {
    ElectronicDevice theDevice;
    
    public TurnTVUp(ElectronicDevice newDevice){
        theDevice = newDevice;
    }
    
    @Override
    public void execute() {
        theDevice.volumeUp();
    }
    
    @Override
    public void undo() {
        theDevice.volumenDown();
    }
}
```

This is known as the invoker.
It has a method press() that when executed causes the execute method to be called

The execute method for the Command interface then calls the method assigned in the class that implements the Command interface.
```java
public class DeviceButton{
    Command theCommand;
    
    public DeviceButton(Command newCommand){
        theCommand = newCommand;
    }
    
    public void press(){
        theCommand.execute();
    }
    // Now the remote can undo past commands
    public void pressUndo(){
        theCommand.undo();
    }
}
```

```java
public class TVRemote {
    public static ElectronicDevice getDevice(){
        return new Television();
    }
}
```
Gets the ElectronicDevice to use.
TurnTVOn contains the command to turn on the tv When execute() is called on this command object it will execute the method on() in Television
```java
import java.util.ArrayList;
import java.util.List;

public class PlayWithRemote {
    public static void main(String[] args){
        ElectronicDevice newDevice = TVRemote.getDevice();
        TurnTVOn onCommand = new TurnTVOn(newDevice);
```
Calling the execute() causes on() to execute in Television
When press() is called theCommand.execute(); executes
Calling the execute() causes off() to execute in Television
Now when execute() is called volumeUp() of Television executes.
Calling the execute() causes volumeUp() to execute in Television.
When press() is called theCommand.execute(); executes.
Creating a TV and Radio to turn off with 1 press.

```java
        DeviceButton onPressed = new DeviceButton(onCommand);
        onPressed.press();
```
Now when execute() is called off() of Television executes
```java        
        TurnTVOff offCommand = new TurnTVOff(newDevice);
        onPressed = new DeviceButton(offCommand);
        onPressed.press();
```

```java
        TurnTVUp volUpCommand = new TurnTVUp(newDevice);
        onPressed = new DeviceButton(volUpCommand);
        onPressed.press();
        onPressed.press();
        onPressed.press();
        Television theTV = new Television();
```

```java
        Radio theRadio = new Radio();

        // Add the Electronic Devices to a List
        List<ElectronicDevice> allDevices = new ArrayList<ElectronicDevice>();

        allDevices.add(theTV);
        allDevices.add(theRadio);
```
Send the List of Electronic Devices to TurnItAllOff  where a call to run execute() on this function will call off() for each device in the list

This calls for execute() to run which calls for off() to run for every ElectronicDevice
```java
        TurnItAllOff turnOffDevices = new TurnItAllOff(allDevices);
        DeviceButton turnThemOff = new DeviceButton(turnOffDevices);
        turnThemOff.press();
```
It is common to be able to undo a command in a command pattern. 
To do so, DeviceButton will have a method called undo Undo() will perform the opposite action that the normal Command performs. 
undo() needs to be added to every class with an execute()

```java
        turnThemOff.pressUndo();
    }
}
```
To undo more than one command add them to a LinkedList using addFirst(). 
Then execute undo on each item until there are none left. (This is your Homework)

```java
import java.util.List;
public class TurnItAllOff implements Command {
    List<ElectronicDevice> theDevices;
    
    public TurnItAllOff(List<ElectronicDevice> newDevices) {
        theDevices = newDevices;
    }
    
    @Override
    public void execute() {
        for (ElectronicDevice device : theDevices) {
            device.off();
        }
    }
    
    @Override
    public void undo() {
        for (ElectronicDevice device : theDevices) {
            device.on();
        }
    }
}
```

```run
TV is on
TV is off
TV Volume is at: 1
TV Volume is at: 2
TV Volume is at: 3
TV is off
Radio is off
TV is on
Radio is on
```



[Wikipedia](https://en.wikipedia.org/wiki/Command_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
