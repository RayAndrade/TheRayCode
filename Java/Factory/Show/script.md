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
we get
```java
public double getAmtDamage() {
    return amtDamage;
}

public void setAmtDamage(double amtDamage) {
    this.amtDamage = amtDamage;
}
```
We refactor **setAmtDamage** to **setDamage**
so we can match the video we are watching..
we Start with::
```java
public double getAmtDamage() {
    return amtDamage;
}

public void setAmtDamage(double amtDamage) {
    this.amtDamage = amtDamage;
}
```
refactor **getAmtDamage** to **getDamage** and <br/>
newDamage to **newDamage**
we end up with
```java
public double amtDamage() {
    return amtDamage;
}

public void setDamage(double newDamage) {
    this.amtDamage = newDamage;
}
```
to keep in line with the video<br/>
Next we add:<br/>

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
Now let's creat a couple of classes we call the **UFOEnemyShip**, **RocketEnemyShip** and **BigUFOEnemyShip** each extended with *EnemyShip*..<br/>

for **UFOEnemyShip** we add the following constructor:
```java
public UFOEnemyShip(){
    setName("UFO Enemy Ship");
    setDamage(20.0);
}
```
for **RocketEnemyShip** we add the following constructor:
```java
public RocketEnemyShip(){
    setName("Rocket Enemy Ship");
    setDamage(10.0);
}
```
and for **BigUFOEnemyShip** we add the following constructor:
```java
public BigUFOEnemyShip(){
    setName("Big UFO Enemy Ship");
    setDamage(40.0);
}
```
BUT we want to be able to have each ship interact during fun time. Since each are under the *same* interfase, they are of the same type.
An we can slect which one to run during runtime.
Let's create a **factory**.<br/>
the name we choose will be **EnemyShipFactory**. the code will be:
```java
public EnemyShip makeEnemyShip(String newShipType){
    EnemyShip newShip = null;
    if (newShipType.equals("U")){
        return new UFOEnemyShip();
    } else
    if (newShipType.equals("R")){
        return new RocketEnemyShip();
    } else
    if (newShipType.equals("B")){
        return new BigUFOEnemyShip();
    } else return null;
}
```
Now back at the main method in **EnemyShipTesting**.. <br/>

```java
     // Create the factory object
     EnemyShipFactory shipFactory = new EnemyShipFactory();
     // Enemy ship object
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
/*
EnemyShip theEnemy = null;
// Old way of creating objects
// When we use new we are not being dynamic
EnemyShip ufoShip = new UFOEnemyShip();
doStuffEnemy(ufoShip);
System.out.print("\n");
// -----------------------------------------
// This allows me to make the program more dynamic
// It doesn't close the code from being modified
// and that is bad!
// Defines an input stream to watch: keyboard
Scanner userInput = new Scanner(System.in);
String enemyShipOption = "";
System.out.print("What type of ship? (U or R)");
if (userInput.hasNextLine()){
enemyShipOption = userInput.nextLine();
}
if (enemyShipOption == "U"){
	theEnemy = new UFOEnemyShip();
} else
if (enemyShipOption == "R"){
	theEnemy = new RocketEnemyShip();
} else {
	theEnemy = new BigUFOEnemyShip();
}
doStuffEnemy(theEnemy);
// --------------------------------------------
*/
}
```



