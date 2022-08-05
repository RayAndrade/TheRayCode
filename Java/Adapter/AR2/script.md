```url
   https://youtu.be/qG286LQM6BU
```

Derek Banas

Our goal is to connect two incompatable systems together.

The Adapter:

* Allows 2 incoparable interfaces to work together

* Used when the cleient expects a (target) interface

* TheAdapter class allows the use of the avaiable interface and the Target interface

* Any class can work together as long as the Adapter solve the issue that all must must implement every method definded by the shared interface.

The first thing we create is the interface for the Attacker we call **Attacker**.
The interface requiers the following methods

```java
public void fireWeapon();
public void driveForward();
public void assignDriver(String driverName);
```

Next we create a class that will use this adapter called **Tank**
We create a **Tank** that will be implentented by **Attacker**. We will import the *Random* library to add some reandomness to our project.

```java
public class Tank implements Attacker{ }
```
we add a random number generator

```java
Random generator = new Random();
```

Import the class
```java
import java.util.Random;
```

Next we add the methods

```java
public void fireWeapon() {
}

public void driveForward() {
}

public void assignDriver(String driverName) {
}
```
And now we add code to each of those methods:

for **fireWeapon**
```java
int attackDamage = generator.nextInt(10) + 1;
System.out.println("The Tank Does " + attackDamage + " Damage");
```

for **driveForward**

```java
int movement = generator.nextInt(5) + 1;
System.out.println("The Tank moves " + movement + " spaces");
```

And for **assignDriver**
```java
System.out.println(driverName + " is driving the tank");
```

When we commplete our tank looks like


```java
import java.util.Random;

public class Tank implements Attacker{

    public void fireWeapon() {
        int attackDamage = generator.nextInt(10) + 1;
        System.out.println("Enemy Tank Does " + attackDamage + " Damage");
    }

    public void driveForward() {
        int movement = generator.nextInt(5) + 1;
        System.out.println("Tank moves " + movement + " spaces");
    }

    public void assignDriver(String driverName) {
        System.out.println(driverName + " is driving the tank");
    }
}
```

Next we creatte a **Robot**.
The class for the Robot looks like

```java
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
```
Now Let's create an Adapter.

The Adapter will implement the Attacker interface

```java
public class EnemyRobotAdapter implements EnemyAttacker{
    EnemyRobot theRobot;
	
    public EnemyRobotAdapter(EnemyRobot newRobot){
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
```

Now let's test this in the mail method


```java
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

        hankTheTankNondfa.assignDriver("Hank");
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


We compile and should get the following result
```run
The Robot
Robot Tramps on Robby
Robot Walks Forward 2 spaces
Robot Causes 7 Damage With Its Hands

The Tank
Hank is driving the tank
The Tank moves 1 spaces
The Tank Does 6 Damage

The Robot with Adapter
Robot Tramps on Mark
Robot Walks Forward 3 spaces
Robot Causes 6 Damage With Its Hands
```

