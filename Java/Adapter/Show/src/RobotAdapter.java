public class RobotAdapter implements Attacker {
    Robot theRobot;

    public RobotAdapter(Robot newRobot){
        theRobot = newRobot;
    }

    public void fireWeapon() {
        theRobot.smashWithHands();
    }

    public void driveForward() {
        theRobot.walkForward();
    }

    public void assignDriver(String driverName) {
        theRobot.reactToHuman(driverName);
    }
}
