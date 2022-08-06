import java.util.Random;

public class Tank implements Attacker {

    Random generator = new Random();

    public void fireWeapon() {
        int attackDamage = generator.nextInt(10) + 1;
        System.out.println("The Tank Does " + attackDamage + " Damage");
    }

    public void driveForward() {
        int movement = generator.nextInt(5) + 1;
        System.out.println("The Tank moves " + movement + " spaces");
    }

    public void assignDriver(String driverName) {
        System.out.println(driverName + " is driving the tank");
    }
}
