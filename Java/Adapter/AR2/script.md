```url
   https://youtu.be/qG286LQM6BU
```

Derek Banas

* Allows 2 incoparable interfaces to work together

* Used when the cleient expects a (target) interface

* TheAdapter class allows the use of the avaiable interface and the Target interface

* Any class can work together as long as the Adapter solve the issue that all must must implement every method definded by the shared interface.

The first thing we create is the interface for the Attacker we call **Attacker**.


```java
public void fireWeapon();
public void driveForward();
public void assignDriver(String driverName);
```

We create a **Tank** that will be implentented by **Attacker**. We will import the *Random* library to add some reandomness to our project.

These methods are the method each client is *expected* to have: *fireWeapon, driveForward and assignDriver*.

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




We compile and should get the following result
```run
The Robot
Robot Tramps on Robby
Robot Walks Forward 4 spaces
Robot Causes 1 Damage With Its Hands

The Tank
Hank is driving the tank
Tank moves 2 spaces
Enemy Tank Does 10 Damage

The Robot with Adapter
Robot Tramps on Mark
Robot Walks Forward 4 spaces
Robot Causes 7 Damage With Its Hands
```

Now let's implemt this interface to the class 
