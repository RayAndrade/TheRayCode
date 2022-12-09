[back](./page06.md)

Filename: EnemyShip.java

Newly defined objects that represent weapon & engine.
These can be changed easily by assigning new parts in UFOEnemyShipFactory or UFOBossEnemyShipFactory

```java

public abstract class EnemyShip {
	
	private String name;
	
	ESWeapon weapon;
	ESEngine engine;
	
	public String getName() { return name; }
	public void setName(String newName) { name = newName; }
	
	abstract void makeShip();
	
	
	public void followHeroShip(){
		
		System.out.println(getName() + " is following the hero at " + engine );

	}
	
	public void displayEnemyShip(){
		
		System.out.println(getName() + " is on the screen");
		
	}
	
	public void enemyShipShoots(){
		
		System.out.println(getName() + " attacks and does " + weapon);
		
	}
	
	public String toString(){
		
		String infoOnShip = "The " + name + " has a top speed of " + engine + 
				" and an attack power of " + weapon;
		
		return infoOnShip;
		
	}
	
}

```

Because I defined the toString method in engine when it is printed the String defined in toString goes on the screen


If any EnemyShip object is printed to screen this shows up


[page9](./page08.md)
