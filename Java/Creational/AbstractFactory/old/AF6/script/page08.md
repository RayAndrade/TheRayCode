[back](./page07.md)

Filename: UFOEnemyShip.java

We define the type of ship we want to create by stating we want to use the factory that  makes enemy ships

The enemy ship required parts list is sent to this method. 
They state that the enemy ship must have a weapon and engine assigned. 
That object also states the specific parts needed to make a regular UFO versus a Boss UFO.

```java
	
	EnemyShipFactory shipFactory;
	
	public UFOEnemyShip(EnemyShipFactory shipFactory){
		
		this.shipFactory = shipFactory;
		
	}

	void makeShip() {
		
		System.out.println("Making enemy ship " + getName());
		
		weapon = shipFactory.addESGun();
		engine = shipFactory.addESEngine();
		
	}
	
}

```

EnemyShipBuilding calls this method to build a specific UFOEnemyShip

The specific weapon & engine needed were passed in shipFactory. 
We are assigning those specific part objects to the UFOEnemyShip here

[page9](./page09.md)
