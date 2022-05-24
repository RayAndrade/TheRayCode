import java.util.Scanner;
public class EnemyShipTesting {
    public static void main(String[] args){
        EnemyShipFactory shipFactory = new EnemyShipFactory();
        EnemyShip theEnemy = null;
        Scanner userInput = new Scanner(System.in);
        System.out.print("What type of ship? (U / R )");
        if (userInput.hasNextLine()){
            String typeOfShip = userInput.nextLine();
            theEnemy = shipFactory.makeEnemyShip(typeOfShip);
            if(theEnemy != null){
                doStuff(theEnemy);
            } else System.out.print("Please enter U or R next time");
        }
    }
    private static void doStuff(EnemyShip anEnemyShip) {
        anEnemyShip.displayEnemyShip();
        anEnemyShip.followHeroShip();
        anEnemyShip.enemyShipShoots();
    }
}
