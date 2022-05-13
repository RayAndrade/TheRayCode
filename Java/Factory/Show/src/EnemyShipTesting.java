import java.util.Scanner;

public class EnemyShipTesting {
    public static void main(String[] args){
        RocketEnemyShip anEnemyShip = new RocketEnemyShip();
        doStuff(anEnemyShip);
    }

    private static void doStuff(EnemyShip anEnemyShip) {
        anEnemyShip.displayEnemyShip();
        anEnemyShip.followHeroShip();
        anEnemyShip.enemyShipShoots();
    }
}
