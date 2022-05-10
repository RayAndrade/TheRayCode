import java.util.Scanner;

public class EnemyShipTesting {
    public static void main(String[] args){
        RocketEnemyShip ship = new RocketEnemyShip();
        doStuff(ship);
    }

    private static void doStuff(EnemyShip anEnemyShip) {
        anEnemyShip.displayEnemyShip();
        anEnemyShip.followHeroShip();
        anEnemyShip.enemyShipShoots();
    }
}
