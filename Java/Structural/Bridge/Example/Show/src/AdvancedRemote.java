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
