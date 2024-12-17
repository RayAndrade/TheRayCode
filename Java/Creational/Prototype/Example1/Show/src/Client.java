public class Client {
    public static void compareObjects(ConcretePrototype original, ConcretePrototype clone) {
        System.out.println("\nComparing original and cloned students...");
        if (original == clone) {
            System.out.println("These are the *same* objects! (What? Are you serious?)");
        } else {
            System.out.println("These are *different* objects. Phew!");
        }

        if (original.getName().equals(clone.getName())) {
            System.out.println("But their names are the same. Cloning works!");
        } else {
            System.out.println("Something went wrong in cloning. Time for debugging.");
        }
    }
}
