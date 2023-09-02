package TheRayCode.Command;

public class TrafficController {
    private Command greenCommand;
    private Command yellowCommand;
    private Command redCommand;

    public TrafficController(Command green, Command yellow, Command red) {
        this.greenCommand = green;
        this.yellowCommand = yellow;
        this.redCommand = red;
    }

    public void requestGreen() {
        greenCommand.execute();
    }

    public void requestYellow() {
        yellowCommand.execute();
    }

    public void requestRed() {
        redCommand.execute();
    }
}
