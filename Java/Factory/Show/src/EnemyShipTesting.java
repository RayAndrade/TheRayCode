import java.util.Scanner;

public class EnemyShipTesting {
    public static void main(String[] args){
        EnemyShip ufoShip = new UFOEnemyShip();
        doStuff(ufoShip);
    }

    private static void doStuff(EnemyShip anEnemyShip) {
        anEnemyShip.displayEnemyShip();
        anEnemyShip.followHeroShip();
        anEnemyShip.enemyShipShoots();
    }
}
