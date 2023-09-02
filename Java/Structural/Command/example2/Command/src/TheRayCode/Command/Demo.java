package TheRayCode.Command;

public class Demo {
    public static void main(String[] args) {
        // Receiver
        TrafficLight trafficLight = new TrafficLight();

        // Commands
        TurnGreenCommand turnGreen = new TurnGreenCommand(trafficLight);
        TurnYellowCommand turnYellow = new TurnYellowCommand(trafficLight);
        TurnRedCommand turnRed = new TurnRedCommand(trafficLight);

        // Invoker
        TrafficController controller = new TrafficController(turnGreen, turnYellow, turnRed);

        // Execute commands via Invoker
        controller.requestGreen();
        controller.requestYellow();
        controller.requestRed();
    }
}
