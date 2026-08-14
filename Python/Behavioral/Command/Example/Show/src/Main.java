public class Main {
    public static void main(String[] args) {

        Light light = new Light(); // Create receiver
        Command lightOn = new LightOnCommand(light); // Create command and associate with receiver
        RemoteControl remote = new RemoteControl(); // Create invoker
        remote.setCommand(lightOn); // Set the command
        remote.pressButton(); // Execute the command

    }
}