[back](./page10.md)

Filename: ESUFOEngine.java

Here we define a basic component of a space ship
Any part that implements the interface ESEngine can replace that part in any ship.

EnemyShip contains a reference to the object ESWeapon. 
It is stored in the field weapon
		
The Strategy design pattern is being used here:
When the field that is of type ESUFOGun is printed the following shows on the screen.

```java

public class ESUFOEngine implements ESEngine{
	
	public String toString(){
		return "1000 mph";
	}
}

```
[page 14](./page14.md)
