[back](./page05.md)

Filename: UFOBossEnemyShipFactory.java

This factory uses the EnemyShipFactory interface to create very specific UFO Enemy Ship

This is where we define all of the parts the ship will use by defining the methods implemented  being ESWeapon and ESEngine

The returned object specifies a specific weapon & engine

```java

public class UFOBossEnemyShipFactory implements EnemyShipFactory{

	public ESWeapon addESGun() {
		return new ESUFOBossGun(); // Specific to Boss UFO
	}
	
	public ESEngine addESEngine() {
		return new ESUFOBossEngine(); // Specific to Boss UFO
	}

}
```
Defines the weapon object to associate with the ship

Defines the engine object to associate with the ship


[page9](./page07.md)
