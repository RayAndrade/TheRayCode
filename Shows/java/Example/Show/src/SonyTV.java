public class SonyTV  implements TV{
    @Override
    public void on() {
        System.out.println("Sony TV: ON");
    }

    @Override
    public void off() {
        System.out.println("Sony TV: ON");
    }

    @Override
    public void tuneChannel(int channel) {
        System.out.println("Sony TV: Tuned to channel " + channel);
    }
}
