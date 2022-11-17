[back](./page11.md)

Filename: ESUFOGun.java

Here we define a basic component of a space ship.
Any part that implements the interface ESWeapon can replace that part in any ship.


EnemyShip contains a reference to the object ESWeapon. 
It is stored in the field weapon.
	
The Strategy design pattern is being used here.
When the field that is of type ESUFOGun is printed the following shows on the screen

```java

public class ESUFOGun implements ESWeapon{
	
	public String toString(){
		return "20 damage";
	}
	
}
```


[page 13](./page13.md)
