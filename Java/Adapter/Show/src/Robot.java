// This is the Adaptee. The Adapter sends method calls
// to objects that use the EnemyAttacker interface
// to the right methods defined in EnemyRobot

import java.util.Random;

public class Robot{

    Random generator = new Random();

    public void smashWithHands() {
        int attackDamage = generator.nextInt(10) + 1;
        System.out.println("The Robot Causes " + attackDamage + " Damage With Its Hands");
    }

    public void walkForward() {
        int movement = generator.nextInt(5) + 1;
        System.out.println("The Robot Walks Forward " + movement + " spaces");
    }

    public void reactToHuman(String driverName) {
        System.out.println("The Robot Tramps on " + driverName);
    }
}