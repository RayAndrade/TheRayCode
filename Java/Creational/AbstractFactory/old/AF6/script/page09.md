[back](./page08.md)

Filename: UFOBossEnemyShip.java

We define the type of ship we want to create by stating we want to use the factory that makes enemy ships.

The enemy ship required parts list is sent to  this method. 
They state that the enemy ship must have a weapon and engine assigned. 
That object also states the specific parts needed to make a Boss UFO versus a Regular UFO

```java

public class UFOBossEnemyShip extends EnemyShip{

	EnemyShipFactory shipFactory;
	
	public UFOBossEnemyShip(EnemyShipFactory shipFactory){
		
		this.shipFactory = shipFactory;
		
	}
	

	void makeShip() {
		
		// TODO Auto-generated method stub
		
		System.out.println("Making enemy ship " + getName());
		
		weapon = shipFactory.addESGun();
		engine = shipFactory.addESEngine();
		
	}
	
}
```
EnemyShipBuilding calls this method to build a specific UFOBossEnemyShip

The specific weapon & engine needed were passed in shipFactory. 
We are assigning those specific part objects to the UFOBossEnemyShip here
		
[page9](./page10.md)
