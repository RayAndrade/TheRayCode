public class MealPrototype implements Prototype{

    private String mealName;
    private String ingredients;
    private double price;

    // Constructor
    public MealPrototype(String mealName, String ingredients, double price) {
        this.mealName = mealName;
        this.ingredients = ingredients;
        this.price = price;
    }

    @Override
    public Prototype clone() {
        System.out.println("\nCloning the meal: " + mealName + "...");
        return new MealPrototype(this.mealName, this.ingredients, this.price);
    }

    // Display meal details
    public void displayMeal() {
        System.out.println("Meal: " + mealName);
        System.out.println("Ingredients: " + ingredients);
        System.out.println("Price: $" + price);
    }
    public String getMealName() {
        return this.mealName;
    }
}
