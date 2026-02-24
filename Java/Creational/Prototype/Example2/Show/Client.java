public class Client {
    public static void compareMeals(MealPrototype original, MealPrototype clone) {

        if (original == clone) {
            System.out.println("These are the *same* meals! Is this magic?!");
        } else {
            System.out.println("These are *different* meals. Phew! The chef cloned it correctly.");
        }

        if (original.getMealName().equals(clone.getMealName())) {
            System.out.println("The meal names are identical. Cloning is a success!");
        } else {
            System.out.println("Something went wrong. Back to the kitchen!");
        }
    }
}
