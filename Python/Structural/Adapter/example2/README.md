
1. **Robot.java**:
    - **Purpose**: This class defines a basic Robot.
    - **Attributes**:
      - `Random generator`: Used for generating random numbers for movement and attack damage.
    - **Methods**:
      - `smashWithHands()`: Generates a random attack damage and displays it.
      - `walkForward()`: Generates a random movement value and displays it.
      - `reactToHuman(String driverName)`: Displays a message showing the robot's reaction to a human.

This is the Adaptee. The Adapter sends method calls to objects that use the EnemyAttacker interface to the right methods defined in EnemyRobot

**Robot.java**

```
import java.util.Random;
public class Robot {
    Random generator = new Random();

    public void smashWithHands() {
        int attackDamage = generator.nextInt(10) + 1;
        System.out.println("Robot Causes " + attackDamage + " Damage With Its Hands");
    }

    public void walkForward() {
        int movement = generator.nextInt(5) + 1;
        System.out.println("Robot Walks Forward " + movement + " spaces");
    }

    public void reactToHuman(String driverName) {
        System.out.println("Robot Tramps on " + driverName);
    }
}
```

2. **Attacker.java**:
    - **Purpose**: This is an interface that defines the actions an attacker can perform.
    - **Methods**:
      - `fireWeapon()`: Fires the attacker's weapon.
      - `driveForward()`: Drives the attacker forward.
      - `assignDriver(String driverName)`: Assigns a driver to the attacker.

**Attacker.java**

```
public interface Attacker {
    public void fireWeapon();
    public void driveForward();
    public void assignDriver(String driverName);
}
```

3. **RobotAdapter.java**:
    - **Purpose**: This class is an adapter for the Robot class to fit into the Attacker interface.
    - **Attributes**:
      - `Robot theRobot`: The robot that this adapter wraps.
    - **Methods**:
      - `fireWeapon()`: Calls the `smashWithHands()` method of the wrapped Robot.
      - `driveForward()`: Calls the `walkForward()` method of the wrapped Robot.
      - `assignDriver(String driverName)`: Calls the `reactToHuman(driverName)` method of the wrapped Robot.

The Adapter must provide an alternative action for the the methods that need to be used because EnemyAttacker was implemented.

This adapter does this by containing an object of the same type as the Adaptee (EnemyRobot) All calls to EnemyAttacker methods are sent instead to methods used by EnemyRobot.

```
public class RobotAdapter implements Attacker{
    Robot theRobot;

    public RobotAdapter(Robot newRobot){
        theRobot = newRobot;
    }
    @Override
    public void fireWeapon() {
        theRobot.smashWithHands();
    }

    @Override
    public void driveForward() {
        theRobot.walkForward();
    }

    @Override
    public void assignDriver(String driverName) {
        theRobot.reactToHuman(driverName);
    }
}
```
4. **Tank.java**:
    - **Purpose**: This class defines a basic Tank which implements the Attacker interface.
    - **Attributes**:
      - `Random generator`: Used for generating random numbers for movement and attack damage.
    - **Methods**:
      - `fireWeapon()`: Generates a random attack damage for the tank and displays it.
      - `driveForward()`: Generates a random movement value for the tank and displays it.
      - `assignDriver(String driverName)`: Displays the driver's name driving the tank.


We can add the Attacker to a Tank

**Tank.java**

```
import java.util.Random;
public class Tank implements Attacker{
    Random generator = new Random();

    @Override
    public void fireWeapon() {
        int attackDamage = generator.nextInt(10) + 1;
        System.out.println("The Tank Does " + attackDamage + " Damage");
    }

    @Override
    public void driveForward() {
        int movement = generator.nextInt(5) + 1;
        System.out.println("The Tank moves " + movement + " spaces");
    }

    @Override
    public void assignDriver(String driverName) {
        System.out.println(driverName + " is driving the tank");
    }
}
```

5. **Main.java**:
    - **Purpose**: This class has the main method that tests and demonstrates the above classes and interface.
    - **Flow**:
      - A `Tank` and `Robot` object are instantiated.
      - A `RobotAdapter` is instantiated with the `Robot` object, effectively turning the robot into an `Attacker`.
      - The functionalities of the Robot, Tank, and Robot wrapped with the Adapter are demonstrated.


**Main.java**

```
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
```

The essence of the code is to show the Adapter design pattern. The `Robot` doesn't naturally fit the `Attacker` interface (because it has different method names and functionalities). However, with the `RobotAdapter`, it can be made to fit the `Attacker` interface without changing the original `Robot` class. This is a classic use of the Adapter pattern - allowing classes with incompatible interfaces to work together.

