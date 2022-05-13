Following //  https://www.youtube.com/watch?v=ub0DXaeV6hA <br/>
Use the factory if you mant your code to return one of several classes that share a common super class.
We want the ability to choose clases at runtime, that is what the factory provides.


We start by createing an * **EnemyShip** *class*. It will be abstract.
```java
* public abstract class EnemyShip { }
```
It will have a couple of *private* fields such as
```java
*
private String name;
private double amtDamage;

```
Let's add some getters and some setters for these varables:
We use place cursor on the varable *generate > getter and setters*
This should add the following dode for you:
XX
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
*

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
Now we will use this abstract class to create other ships.
Now create the * **UFOEnemyShip** which is extended by **EnemyShip**.
```java
public class UFOEnemyShip * extends EnemyShip  {
}
```
we add some code to show some actions constuctor.
```java
*
public UFOEnemyShip(){
    setName("UFO Enemy Ship");
    setAmtDamage(20.0);
}
```

Now let's create the **RocketEnemyShip**  and  it too will be extended by **EnemyShip**.
```java
public class RocketEnemyShip extends EnemyShip  { }
```
Now we try out the **RocketEnemyShip** which ill be simple.
```java
public RocketEnemyShip(){
    setName("Rocket Enemy Ship");
    setAmtDamage(10.0);
}
```
No we want to test out these ships.
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
EnemyShip anEnemyShip = new UFOEnemyShip();
doStuff(anEnemyShip);
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
doStuff(anEnemyShip);
```
Now when we run this we get
```run
Rocket Enemy Ship is on the screen
Rocket Enemy Ship is following the hero
Rocket Enemy Ship attacks and does 10.0 damage to hero
```
Now we want to create either one of these *Ships* at runtime
Let's create a call that will harness these clases and provide a way we can access and create each ship at run time.
We start with defineing a class we call **EnemyShipFactory**.
Here we define a method called **makeEnemyShip** which will have the following code.
```java
public EnemyShip makeEnemyShip(String newShipType){

    EnemyShip newShip = null;

    if (newShipType.equals("U")){
        return new UFOEnemyShip();
    } else
    if (newShipType.equals("R")){
        return new RocketEnemyShip();
    } else return null;
}
```
Back at main we repace the code with
```java
// Create the factory object
EnemyShipFactory shipFactory = new EnemyShipFactory();
// Enemy ship object
EnemyShip theEnemy = null;
Scanner userInput = new Scanner(System.in);
System.out.print("What type of ship? (U / R )");
if (userInput.hasNextLine()){
    String typeOfShip = userInput.nextLine();
    theEnemy = shipFactory.makeEnemyShip(typeOfShip);
    if(theEnemy != null){
        doStuff(theEnemy);
    } else System.out.print("Please enter U or R next time");
}
```
When we rung this now
```run
What type of ship? (U / R )U
UFO Enemy Ship is on the screen
UFO Enemy Ship is following the hero
UFO Enemy Ship attacks and does 20.0 damage to hero
```
and if we choose R we get
```run
What type of ship? (U / R )R
Rocket Enemy Ship is on the screen
Rocket Enemy Ship is following the hero
Rocket Enemy Ship attacks and does 10.0 damage to hero
```


We can now run this with option U or R, but we can add another ship to our program easlaly.
Let's a **BigUFOEnemyShip** to our program.It to will be extended by **EnemyShip**. 
And will have simular code to use to create its damage.
```java
public class BigUFOEnemyShip extends UFOEnemyShip {
    public BigUFOEnemyShip(){
        setName("Big UFO Enemy Ship");
        setAmtDamage(40.0);
    }
}
```
We can eaily add this ship to our game by just adding another choice we can make by adding
```java
else
   if (newShipType.equals("B")){
        return new BigUFOEnemyShip();}
```
now we change main in **EnemyShipTesting** to
```java
// Create the factory object
EnemyShipFactory shipFactory = new EnemyShipFactory();

 // Create the factory object
  EnemyShip theEnemy = null;
  Scanner userInput = new Scanner(System.in);
  System.out.print("What type of ship? (U / R / B)");
  if (userInput.hasNextLine()){
      String typeOfShip = userInput.nextLine();
      theEnemy = shipFactory.makeEnemyShip(typeOfShip);
      if(theEnemy != null){
          doStuff(theEnemy);
      } else System.out.print("Please enter U, R, or B next time");
}
```

Run and enter closing notes




