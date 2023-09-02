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
