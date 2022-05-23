package TheRayCode.command3;

public class TurnTVUp implements Command {
    ElectronicDevice theDevice;
    public TurnTVUp(ElectronicDevice newDevice){
        theDevice = newDevice;
    }
    public void execute() {
        theDevice.volumeUp();
    }
    public void undo() {
        theDevice.volumenDown();
    }
}