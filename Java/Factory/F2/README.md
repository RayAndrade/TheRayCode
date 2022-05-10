In this artical I want to talk about the factory design pattern. 
This pattern was brought to light by the Gang of Four or the GoF.
I will be using an example that I was given using a video game that would simulate the operation of fighting UFOs.
This example was given to me by a man named Derek Banas. Look hip up on YouTube.

I want to create a class that I call the **EnemyShip**. This class will be *abstract* so we can create other classes using this class a an *interface*.
We can have other *Ships* that will be created by using this class as a *base class*.
```java
private String name;
private double amtDamage;

public String getName() {
return name;
}

public void setName(String name) {
this.name = name;
}

public double getDamage() {
return amtDamage;
}

public void setDamage(double newDamage) {
this.amtDamage = newDamage;
}

public void followHeroShip(){
System.out.println(getName() + " is following the hero");
}

public void displayEnemyShip(){
System.out.println(getName() + " is on the screen");
}

public void enemyShipShoots() {
System.out.println(getName() + " attacks and does " + getDamage() + " damage to hero");
}
```
We have the first two field *private* so we add some setters and setters to be able to access them.
Next we create some method that will allow us to demonstrate some action between them.
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
In our example we will have a Random number gerator that will pick a enamy associated with the number.
This will be done at runtime which is the demostration.

Let's create an **UFOEnemyShip** whicn will be extended by **EnemyShip**.
```java
public class UFOEnemyShip extends EnemyShip{
    public UFOEnemyShip(){
        setName("UFO Enemy Ship");
        setAmtDamage(20.0);
    }
}
```
And we can also create a **RocketEnemyShip** simularly
```java
public class RocketEnemyShip  extends EnemyShip{
    public RocketEnemyShip(){
        setName("Rocket Enemy Ship");
        setAmtDamage(10.0);
    }
}
```
At this point we will examine what we have created.
Let's create a class I call **EnemyShipTesting** which will contain our *main* method

```java
public class EnemyShipTesting {
     public static void main(String[] args){ }
}
```
We add the function:

```java
private static void doStuff(EnemyShip anEnemyShip) {
    anEnemyShip.displayEnemyShip();
    anEnemyShip.followHeroShip();
    anEnemyShip.enemyShipShoots();
}
```
Now to create 






































