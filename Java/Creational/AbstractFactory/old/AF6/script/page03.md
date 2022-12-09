[back](./page02.md)

Filename:  UFOEnemyShipBuilding.java

This is the only class that needs to change, if you want to determine which enemy ships you want to provide as an option to build

```java

public class UFOEnemyShipBuilding extends EnemyShipBuilding {

	protected EnemyShip makeEnemyShip(String typeOfShip) {
		EnemyShip theEnemyShip = null;
		
		
		if(typeOfShip.equals("UFO")){
			EnemyShipFactory shipPartsFactory = new UFOEnemyShipFactory();
			theEnemyShip = new UFOEnemyShip(shipPartsFactory);
			theEnemyShip.setName("UFO Grunt Ship");
			
		} else 
			
			
		if(typeOfShip.equals("UFO BOSS")){
			EnemyShipFactory shipPartsFactory = new UFOBossEnemyShipFactory();
			theEnemyShip = new UFOBossEnemyShip(shipPartsFactory);
			theEnemyShip.setName("UFO Boss Ship");
			
		} 
		
		return theEnemyShip;
	}
}
```
If UFO was sent grab use the factory that knows  what types of weapons and engines a regular UFO needs. 
The EnemyShip object is returned & given a name.

Else

If UFO BOSS was sent grab use the factory that knows what types of weapons and engines a Boss UFO needs. 
The EnemyShip object is returned & given a name



[page9](./page04.md)
