public class EnemyShipFactory {

    public EnemyShip makeEnemyShip(String newShipType){

        EnemyShip newShip = null;

        if (newShipType.equals("U")){
            return new UFOEnemyShip();
        } else
        if (newShipType.equals("R")){
            return new RocketEnemyShip();
        } else return null;
    }
}
