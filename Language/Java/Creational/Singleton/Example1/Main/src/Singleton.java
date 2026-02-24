public class Singleton {
    private static volatile Singleton instance;
    private Singleton() {
        System.out.println("Singleton instance created.");
    }

    public static Singleton getInstance() {
        if (instance == null) { // First check (without lock)
            synchronized (Singleton.class) { // Ensure thread safety
                if (instance == null) { // Second check (inside synchronized)
                    instance = new Singleton();
                }
            }
        }
        return instance;
    }

    public void showMessage() {
        System.out.println("Hello from Singleton!");
    }
}