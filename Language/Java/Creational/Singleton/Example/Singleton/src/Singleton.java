public class Singleton {

    // 1. Create a private static instance of the Singleton class. It's initialized to null initially.
    private static Singleton uniqueInstance;

    // 2. Private constructor prevents instantiation from other classes.
    private Singleton() { }

    // 3. Public method to provide access to the instance. If the instance is null, it creates a new one.
    public static Singleton getInstance() {
        if (uniqueInstance == null) {
            uniqueInstance = new Singleton();
        }
        return uniqueInstance;
    }

    // Optionally, you can have other methods in this class.
    public void showMessage() {
        System.out.println("Hello from the Singleton class!");
    }

}
