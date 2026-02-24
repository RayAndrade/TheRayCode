public class Main {
    public static void main(String[] args) {
        FurnitureFactory modernFactory = new ModernFurnitureFactory();
        FurnitureFactory victorianFactory = new VictorianFurnitureFactory();

        Chair modernChair = modernFactory.createChair();
        Table modernTable = modernFactory.createTable();

        Chair victorianChair = victorianFactory.createChair();
        Table victorianTable = victorianFactory.createTable();

        modernChair.sitOn();
        modernTable.placeItems();
        victorianChair.sitOn();
        victorianTable.placeItems();
    }
}