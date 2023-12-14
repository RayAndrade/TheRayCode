package TheRayCode.bridge.example;
import TheRayCode.bridge.example.devices.Device;
import TheRayCode.bridge.example.devices.Radio;
import TheRayCode.bridge.example.devices.Tv;
import TheRayCode.bridge.example.remotes.AdvancedRemote;
import TheRayCode.bridge.example.remotes.BasicRemote;

public class Demo {
    public static void main(String[] args) {
        testDevice(new Tv());
        testDevice(new Radio());
    }

    public static void testDevice(Device device) {
        System.out.println("Tests with basic remote.");
        BasicRemote basicRemote = new BasicRemote(device);
        basicRemote.power();
        device.printStatus();

        System.out.println("Tests with advanced remote.");
        AdvancedRemote advancedRemote = new AdvancedRemote(device);
        advancedRemote.power();
        advancedRemote.mute();
        device.printStatus();
    }
}
