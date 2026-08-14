public class Main {
    public static void main(String[] args) {
        String[] books = {"Design Patterns", "Clean Code", "Refactoring"};
        BookCollection collection = new BookCollection(books);
        Iterator iterator = collection.createIterator();

        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}