public class BasicRemote extends RemoteControl{

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
