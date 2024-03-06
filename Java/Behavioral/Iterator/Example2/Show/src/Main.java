public class Main {
    public static void main(String[] args) {
        Integer[] sheepCounts = {1, 2, 3, 4, 5};
        SheepCollection collection = new SheepCollection(sheepCounts);
        SheepIterator iterator = collection.createIterator();

        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

    }
}