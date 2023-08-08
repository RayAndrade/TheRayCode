public class Singleton {
    // Static instance of Singleton, ensures it is eagerly created.
    private static final Singleton instance = new Singleton();

    // Private constructor ensures that no other class can instantiate this class.
    private Singleton() {}

    // Public method to provide access to the instance.
    public static Singleton getInstance() {
        return instance;
    }

    // Example method to show that Singleton is working.
    public void showMessage() {
        System.out.println("Hello, I'm a Singleton!");
    }
}
