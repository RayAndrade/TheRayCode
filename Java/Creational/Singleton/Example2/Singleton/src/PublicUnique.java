public class PublicUnique {
    // 1. Create a private static instance of the PublicUnique class. It's initialized to null initially.
    private static PublicUnique uniqueInstance;

    // 2. Private constructor prevents instantiation from other classes.
    private PublicUnique() { }

    // 3. Public method to provide access to the instance. If the instance is null, it creates a new one.
    public static PublicUnique getInstance() {
        if (uniqueInstance == null) {
            uniqueInstance = new PublicUnique();
        }
        return uniqueInstance;
    }

    // Optionally, you can have other methods in this class.
    public void showMessage() {
        System.out.println("Hello from the PublicUnique class!");
    }
}
