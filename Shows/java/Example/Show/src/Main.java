public class Main {
    public static void main(String[] args) {
        System.out.println("The Ray Code is AWESOME!!!");
    }

    static class ConcreteRemote extends RemoteControl {
        public ConcreteRemote(TV tv) {
            super(tv);
        }

        @Override
        public void turnOn() {
            tv.on();
        }

        @Override
        public void turnOff() {
            tv.off();
        }

        @Override
        public void setChannel(int channel) {
            tv.tuneChannel(channel);
        }
    }
}