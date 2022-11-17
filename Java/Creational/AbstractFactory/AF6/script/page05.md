[back](./page04.md)

Filesname: UFOEnemyShipFactory.java

This factory uses the EnemyShipFactory interface to create very specific UFO Enemy Ship

This is where we define all of the parts the ship will use by defining the methods implemented being ESWeapon and ESEngine

The returned object specifies a specific weapon & engine

```java
public class UFOEnemyShipFactory implements EnemyShipFactory{

	public ESWeapon addESGun() {
		return new ESUFOGun(); // Specific to regular UFO
	}
	
	public ESEngine addESEngine() {
		return new ESUFOEngine(); // Specific to regular UFO
	}
}
```

Defines the weapon object to associate with the ship

Defines the engine object to associate with the ship


[page9](./page06.md)
