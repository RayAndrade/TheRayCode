package TheRayCode.Command;

public class TurnYellowCommand implements Command{
    private TrafficLight trafficLight;

    public TurnYellowCommand(TrafficLight trafficLight) {
        this.trafficLight = trafficLight;
    }
    @Override
    public void execute() {
        trafficLight.turnYellow();
    }
}
