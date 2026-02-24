public class Main {
    public static void main(String[] args) {
        Singleton singleton1 = Singleton.getInstance();
        singleton1.showMessage();

        Singleton singleton2 = Singleton.getInstance();

        if (singleton1 == singleton2) {
            System.out.println("Both Singleton instances are the SAME object.");
        } else {
            System.out.println("ERROR: Singleton instances are different! (This should not happen)");
        }

        System.out.println("\n--- Creating PlainClass instances ---");

        PlainClass plain1 = new PlainClass();
        PlainClass plain2 = new PlainClass();

        if (plain1 == plain2) {
            System.out.println("ERROR: PlainClass instances are the same! (This should not happen)");
        } else {
            System.out.println("PlainClass instances are DIFFERENT objects.");
        }
    }
}