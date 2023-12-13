public class Main {
    public static void main(String[] args) {

        Device tv = new TV();
        RemoteControl basicRemote = new BasicRemote(tv);
        basicRemote.togglePower();

        Device radio = new Radio();
        RemoteControl advancedRemote = new AdvancedRemote(radio);
        advancedRemote.togglePower();
    }
}