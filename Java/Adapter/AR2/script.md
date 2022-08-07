```url
   https://youtu.be/qG286LQM6BU?t=142
   
   https://github.com/bethrobson/Head-First-Design-Patterns/tree/master/src/headfirst/designpatterns/
```

http://www.theraycode.com or <http://www.theraycode.com> and sometimes 

Inline-style: 
[![vimeo](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/Adapter141.png)](https://vimeo.com/735684583)


In this code demonstration I will give a code example of using the Adapter design patter

(write goal of program)

The first thing we want to do is to create the *target* interface. 
We call it the **Attacker** and the **Attacker** will require the following methods:

**fireWeapon**, **driveForward** and **assignDriver**

```java
public void fireWeapon();
public void driveForward();
public void assignDriver(String driverName);
```
These are the methods that the client expects to work with.

<hr>

Next we create a class that will use *this* adapter and we will call **Tank**
The **Tank**  class will be implentented by the interface we just created called **Attacker**. 

```java
public class Tank implements Attacker { }
```

Because it *implements Attacker* we need to : 
*Generate* -> *Override* *methods* : should yeield:

**Uncheck insrt @overide and super**

```java
public void fireWeapon() {
}

public void driveForward() {
}

public void assignDriver(String driverName) {
}
```

We will also import the *Random* library to add some reandomness to our project.

```java
import java.util.Random;
```
We add the damage functionality with the Random number generator
```java
Random generator = new Random();
```
 but we also neet to import *java.util.Random*.
```java
import java.util.Random;
```

Let's replace the auto generated super stubs with


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

<hr>
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

<hr>

Next we create a **Robot**.
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

<hr>

Now Let's create an Adapter.

The Adapter will implement the Attacker interface

```java
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
```
<hr>
Now let's test this in the main method


```java
public class Main {
    public static void main(String[] args) {
        Tank hankTheTank = new Tank();

        Robot robbyTheRobot = new Robot();

        Attacker robotAdapter = new Adapter(robbyTheRobot);

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

        robotAdapter.assignDriver("Cecil");
        robotAdapter.driveForward();
        robotAdapter.fireWeapon();
    }
}

```


We compile and should get the following result
```run
The Robot
The Robot Tramps on Robby
The Robot Walks Forward 1 spaces
The Robot Causes 8 Damage With Its Hands

The Tank
Hank is driving the tank
The Tank moves 5 spaces
The Tank Does 7 Damage

The Robot with Adapter
The Robot Tramps on Cecil
The Robot Walks Forward 3 spaces
The Robot Causes 1 Damage With Its Hands
```




