// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        // Attempting to get the unique Singleton instance
        Singleton instance1 = Singleton.getInstance();
        instance1.showMessage();

        // Attempting to get the Singleton instance again
        Singleton instance2 = Singleton.getInstance();

        // Compare the two instances to check if they are the same
        if (instance1 == instance2) {
            System.out.println("Both instances are identical!");
        } else {
            System.out.println("Instances are different!");
        }
    }
}