Following //https://www.youtube.com/watch?v=ub0DXaeV6hA
Use the factory if you mant your code to return one of several classes that share a common super class.
We want the ability to choose clases at runtime, that is what the factory provides.


We start by createing an **EnemyShip** *class*. It will be abstract.
```java
public abstract class private { }
```
It will have a couple of *private* fields such as
```java
private String name;
private double speed;

```
Let's add some getters and some setters for these varables:
We use place cursor on the varable *generate > getter and setters*
This should add the following dode for you:

```java
public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}

public double getAmtDamage() {
    return amtDamage;
}

public void setAmtDamage(double amtDamage) {
    this.amtDamage = amtDamage;
}
```

Let's create some fields to handle some actions.
```java
public void followHeroShip(){
    System.out.println(getName() + " is following the hero");
}

public void displayEnemyShip(){
   System.out.println(getName() + " is on the screen");
}

public void enemyShipShoots() {
    System.out.println(getName() + " attacks and does " + getAmtDamage() + " damage to hero");
}
```

Now create the **UFOEnemyShip** which is extended by **EnemyShip**.
```java
public class UFOEnemyShip extends EnemyShip{
}
```
we add some code to show some actions constuctor.
```java
public UFOEnemyShip(){
    setName("UFO Enemy Ship");
    setAmtDamage(20.0);
}
```

Now let's create the **RocketEnemyShip**  and  it too will be extended by **EnemyShip**.
```java
public class RocketEnemyShip extends EnemyShip{ }
```
Now we try out the **RocketEnemyShip** which ill be simple.
```java
public RocketEnemyShip(){
    setName("Rocket Enemy Ship");
    setAmtDamage(10.0);
}
```

Now let's create **EnemyShipTesting** first we Import the java Scanner
so we will be able to ge input form the user

```java
import java.util.Scanner;
```
No we  will have a **main** method
```java
public class EnemyShipTesting {
    public static void main(String[] args){ }
}
```
To do our texting
We add code:
```java
EnemyShip ufoShip = new UFOEnemyShip();
doStuff(ufoShip);
```
which means we need to create the function **doStuff**

```java
private static void doStuff(EnemyShip anEnemyShip) {
    anEnemyShip.displayEnemyShip();
    anEnemyShip.followHeroShip();
    anEnemyShip.enemyShipShoots();
}
```
our result will be
```run
UFO Enemy Ship is on the screen
UFO Enemy Ship is following the hero
UFO Enemy Ship attacks and does 20.0 damage to hero
```
But to access the other object we need to pick another object and run.
We replace the code in main with
```java
RocketEnemyShip ship = new RocketEnemyShip();
doStuff(ship);
```
Now when we run this we get
```run
Rocket Enemy Ship is on the screen
Rocket Enemy Ship is following the hero
Rocket Enemy Ship attacks and does 10.0 damage to hero
```
Now we want to create either one of these *Ships* at runtime


















Create the factory object create **EnemyShipFactory**

First apporac
```java
EnemyShip ufoShip = new UFOEnemyShip();
doStuff(ufoShip);
```
code gerate
```java
private static void doStuff(EnemyShip ufoShip) {
}
```
Change ufoShip to **anEnemyShip** and add code

```java
anEnemyShip.displayEnemyShip();
anEnemyShip.followHeroShip();
anEnemyShip.enemyShipShoots();
```
Test an show how it's limited.

```run
UFO Enemy Ship is on the screen
UFO Enemy Ship is following the hero
UFO Enemy Ship attacks and does 20.0 damage to hero
```
t = 6:11

Back at **main**. we add comments first:




```java



EnemyShip theEnemy = null;
Scanner userInput = new Scanner(System.in);
System.out.print("What type of ship? (U / R / B)");
if (userInput.hasNextLine()){
String typeOfShip = userInput.nextLine();
theEnemy = shipFactory.makeEnemyShip(typeOfShip);

if(theEnemy != null){
doStuffEnemy(theEnemy);
} else System.out.print("Please enter U, R, or B next time");
}


```
Ended in confusion.


