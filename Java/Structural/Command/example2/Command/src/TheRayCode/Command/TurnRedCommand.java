package TheRayCode.Command;

public class TurnRedCommand implements Command {
    private TrafficLight trafficLight;

    public TurnRedCommand(TrafficLight trafficLight) {
        this.trafficLight = trafficLight;
    }

    @Override
    public void execute() {
        trafficLight.turnRed();
    }
}
