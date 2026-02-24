public class SamsungTV implements TV{
    @Override
    public void on() {
        System.out.println("Samsung TV: ON");
    }

    @Override
    public void off() {
        System.out.println("Samsung TV: OFF");
    }

    @Override
    public void tuneChannel(int channel) {
        System.out.println("Samsung TV: Tuned to channel " + channel);
    }
}
