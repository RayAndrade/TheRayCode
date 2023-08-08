public class Program {
    public static void main(String[] args) {
        // Obtaining the unique instance of Singleton
        Singleton singleton1 = Singleton.getInstance();
        Singleton singleton2 = Singleton.getInstance();
        // Showing messages from both instances
        singleton1.showMessage();
        singleton2.showMessage();

        // Checking if both references point to the same object
        if (singleton1 == singleton2) {
            System.out.println("Both instances are the same!");
        } else {
            System.out.println("Instances are different!");
        }
   }
}