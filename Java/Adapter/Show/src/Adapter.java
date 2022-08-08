public class Adapter implements Attacker{
    Robot theRobot;
    public Adapter(Robot newRobot){
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
