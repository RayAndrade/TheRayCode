
public class Main {

    public static void main(String[] args) {
        System.out.println("Prototype Pattern Demo - Welcome to the Clone-A-Meal Kitchen!");

        // Create an original meal (template)
        MealPrototype originalMeal = new MealPrototype(
                "Cheeseburger with Fries",
                "Burger patty, cheese, lettuce, tomato, pickles, fries",
                9.99
        );

        System.out.println("\nOriginal Meal:");
        originalMeal.displayMeal();

        // Clone the meal
        MealPrototype clonedMeal = (MealPrototype) originalMeal.clone();

        System.out.println("\nCloned Meal:");
        clonedMeal.displayMeal();

        // Compare original and cloned meals
        Client.compareMeals(originalMeal, clonedMeal);

        // Create a new meal using new
        System.out.println("\nChef manually prepares a new meal:");
        MealPrototype newMeal = new MealPrototype(
                "Veggie Pizza",
                "Dough, tomato sauce, bell peppers, mushrooms, olives, mozzarella",
                12.99
        );
        newMeal.displayMeal();

        System.out.println("\nKitchen closed! Meals cloned successfully. Chef is taking a nap.");
    }
}
