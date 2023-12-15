public class Main {
    public static void main(String[] args) {
        TV sonyTv = new SonyTV();
        RemoteControl sonyRemote = new ConcreteRemote(sonyTv);

        sonyRemote.turnOn();
        sonyRemote.setChannel(9);
        sonyRemote.turnOff();

        TV samsungTv = new SamsungTV();
        RemoteControl samsungRemote = new ConcreteRemote(samsungTv);

        samsungRemote.turnOn();
        samsungRemote.setChannel(5);
        samsungRemote.turnOff();
    }

}
class ConcreteRemote extends RemoteControl {
    public ConcreteRemote(TV tv) {
        super(tv);
    }

    public void turnOn() {
        tv.on();
    }

    public void turnOff() {
        tv.off();
    }

    public void setChannel(int channel) {
        tv.tuneChannel(channel);
    }
}