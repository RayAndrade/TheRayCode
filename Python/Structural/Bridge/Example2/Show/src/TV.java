public class TV implements Device{
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
        System.out.println("TV volume set to " + this.volume + "%");
    }

    // Additional TV-specific methods can be added here
}
