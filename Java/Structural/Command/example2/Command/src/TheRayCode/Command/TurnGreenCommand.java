package TheRayCode.Command;

public class TurnGreenCommand implements Command {
    private TrafficLight trafficLight;

    public TurnGreenCommand(TrafficLight trafficLight) {
        this.trafficLight = trafficLight;
    }
    @Override
    public void execute() {
        trafficLight.turnGreen();
    }
}
