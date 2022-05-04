following https://youtu.be/ub0DXaeV6hA<br/>
What is the Factory Pattern??<br/>
When a method returns one of several possible classe that share a common super class<br/>
In our example we start by createing an **EnemyShip** *abstract class*<br/>
We declare the class *abstract* because: An abstract class is a class which cannot be instantiated. It is used by creating an inheriting subclass that can be instantiated.
new > java class > class<br/>
name **EnemyShip** and add the *abstract* modifier.
```java
public abstract class private { }
```
we will add a couple of *private* fields we call:<br/>
```java
private String name;
private double amtDamage;
```
we use cursor on the desired varable wait for the 💡 to appear Edit > Create getters and setters<br/>
The following code should be generateed for name
```java
public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}
```
Do the same for amtDamage<br/>
refactor **setAmtDamage** to **setDamage**










<br/><br/><br/><br/><br/>





































```java
public double getSpeed() {
   return speed;
}

public void setSpeed(double speed) {
    this.speed = speed;
}

public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}
```
Let's create some fields to handle some actions we would want to do..<br/>
```java
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
Now let's creat a class we call the **UFOEnemyShip** which will be extended by *EnemyShip*..<br/>
```java
public class RocketEnemyShip extends EnemyShip
```
we add the following code:
```java
setName("Rocket Enemy Ship");
setDamage(10.0);
```
Let's create a class we call **EnemyShipTesting** which will contain the **main** method<br/>
```java
public class EnemyShipTesting {
    public static void main(String[] args){ }
}
```
we add the import<br/>

```java
import java.util.Scanner;
```
This is our FIRST apporach<br/>
to **main** we add<br/>
```java
EnemyShip ufoShip = new UFOEnemyShip();
doStuff(ufoShip);
```
code gerate<br/>
```java
private static void doStuff(EnemyShip ufoShip) {
}
```
Change ufoShip to anEnemyShip and add code<br/>

```java
anEnemyShip.displayEnemyShip();
anEnemyShip.followHeroShip();
anEnemyShip.enemyShipShoots();
```
When we run it we see the result is limited<br/>
```run
UFO Enemy Ship is on the screen
UFO Enemy Ship is following the hero
UFO Enemy Ship attacks and does 20.0 damage to hero
```
Back at main. we add some code<br/>

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










































