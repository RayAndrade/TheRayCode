public class Main {
    public static void main(String[] args) {
        Tank hankTheTank = new Tank();

        Robot robbyTheRobot = new Robot();

        Attacker robotAdapter = new RobotAdapter(robbyTheRobot);

        System.out.println("The Robot");

        robbyTheRobot.reactToHuman("Robby");
        robbyTheRobot.walkForward();
        robbyTheRobot.smashWithHands();
        System.out.println();

        System.out.println("The Tank");

        hankTheTank.assignDriver("Hank");
        hankTheTank.driveForward();
        hankTheTank.fireWeapon();
        System.out.println();

        System.out.println("The Robot with Adapter");

        robotAdapter.assignDriver("Mark");
        robotAdapter.driveForward();
        robotAdapter.fireWeapon();
    }
}

