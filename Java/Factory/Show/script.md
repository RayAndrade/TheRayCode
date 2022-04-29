following https://youtu.be/ub0DXaeV6hA<br/>
What is the Factory Pattern??<br/>
When a method returns one of several possible classe that share a common super class<br/>
<br/>
In our example we start by createing an **EnemyShip** *abstract class*<br/>

new > java class > class<br/>
name **EnemyShip**
```java
public abstract class private { }
```
we will add a couple of *private* fields we call:<br/>
```java
private String name;
private double speed;
```

Let add some getters and setters for these varabls(can the be done on auto<br/> 
for the *name* <br/>
```java
public String getName() { return name; }
public void setName(String newName) { name = newName; }
```
for *Damage*<br/>

```java
public double getDamage() { return amtDamage; }
public void setDamage(double newDamage) { amtDamage = newDamage; }
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
















































