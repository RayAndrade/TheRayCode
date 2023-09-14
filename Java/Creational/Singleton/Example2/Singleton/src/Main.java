// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        // Attempting to get the unique PublicUnique instance
        PublicUnique instance1 = PublicUnique.getInstance();
        instance1.showMessage();

        // Attempting to get the PublicUnique instance again
        PublicUnique instance2 = PublicUnique.getInstance();

        // Compare the two instances to check if they are the same
        if (instance1 == instance2) {
            System.out.println("Both instances are identical!");
        } else {
            System.out.println("Instances are different!");
        }
    }
}