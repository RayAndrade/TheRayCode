
https://youtu.be/xbjAsdAK4xQ


Abstract Factory Design Pattern

Derek Banas


https://youtu.be/xbjAsdAK4xQ

EnemyShipBuilding handles orders for new EnemyShips. 
You send it a code using the orderTheShip method & it sends the order to the *right factory* for creation.

```java

public class EnemyShipTesting {
	
public static void main(String[] args) {
		
		EnemyShipBuilding MakeUFOs = new UFOEnemyShipBuilding();
 
		EnemyShip theGrunt = MakeUFOs.orderTheShip("UFO");
		System.out.println(theGrunt + "\n");
		
		EnemyShip theBoss = MakeUFOs.orderTheShip("UFO BOSS");
		System.out.println(theBoss + "\n");
	}
}

```

This acts as an ordering mechanism for creating EnemyShips that have a weapon, engine & name & nothing else.
	
The specific parts used for engine & weapon depend  upon the String that is passed to this method

When called a new EnemyShip is made. The specific parts are based on the String entered. After the ship is made we execute multiple methods in the EnemyShip Object

```java

public abstract class EnemyShipBuilding {

	protected abstract EnemyShip makeEnemyShip(String typeOfShip);
	
	public EnemyShip orderTheShip(String typeOfShip) {
		EnemyShip theEnemyShip = makeEnemyShip(typeOfShip);
		
		theEnemyShip.makeShip();
		theEnemyShip.displayEnemyShip();
		theEnemyShip.followHeroShip();
		theEnemyShip.enemyShipShoots();
		
		return theEnemyShip;
		
	}
}
```

