[up](../README.md)

Let's rewrite the **Prototype Pattern** demo using **food** or **meals** instead of students. We'll create a food template (a prototype) that can be cloned. Imagine you are running a busy **restaurant** where the chef prepares a "template meal" and clones it for quick service—perfect for a comedy kitchen scenario!

---

## **Order of Class Creation Recap**  
1. `Prototype.java` (interface).  
2. `MealPrototype.java` (concrete implementation of `Prototype`).  
3. `Client.java` (utility class for comparison).  
4. `Main.java` (execution file).  

---

## **Updated Code Files**  

---

### **1. Prototype.java**  
Defines the `clone` method for all objects that can be cloned.  

```java
public interface Prototype {
    Prototype clone();
}
```

---

### **2. MealPrototype.java**  
Represents a meal that can be cloned.

```java
public class MealPrototype implements Prototype {
    private String mealName;
    private String ingredients;
    private double price;

    // Constructor
    public MealPrototype(String mealName, String ingredients, double price) {
        this.mealName = mealName;
        this.ingredients = ingredients;
        this.price = price;
    }

    // Clone method
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
```

---

### **3. Client.java**  
A helper class to compare original and cloned meals.

```java
public class Client {
    public static void compareMeals(MealPrototype original, MealPrototype clone) {
        System.out.println("\nComparing original and cloned meals...");
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
```

---

### **4. Main.java**  
The main class to demonstrate cloning meals.

```java
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
```

---

## **What You See When You Run the Code**  

```
Prototype Pattern Demo - Welcome to the Clone-A-Meal Kitchen!

Original Meal:
Meal: Cheeseburger with Fries
Ingredients: Burger patty, cheese, lettuce, tomato, pickles, fries
Price: $9.99

Cloning the meal: Cheeseburger with Fries...

Cloned Meal:
Meal: Cheeseburger with Fries
Ingredients: Burger patty, cheese, lettuce, tomato, pickles, fries
Price: $9.99

Comparing original and cloned meals...
These are *different* meals. Phew! The chef cloned it correctly.
The meal names are identical. Cloning is a success!

Chef manually prepares a new meal:
Meal: Veggie Pizza
Ingredients: Dough, tomato sauce, bell peppers, mushrooms, olives, mozzarella
Price: $12.99

Kitchen closed! Meals cloned successfully. Chef is taking a nap.
```

---

## **Explanation**  
- **Original Meal**: Created as the "template" for cloning.  
- **Cloning**: Uses the `clone()` method to create an identical meal with no manual effort.  
- **Comparison**: Ensures the original and cloned meals are separate objects, but their contents are the same.  
- **New Meal**: A manually created meal to demonstrate how cloning saves effort.  

---

## **Comparison Between `new` and `clone`**  

| **Aspect**             | **Using `new`**                                     | **Using `clone`**                               |
|-------------------------|---------------------------------------------------|-----------------------------------------------|
| **Effort**              | Chef prepares all details manually.               | Chef uses a "template" and clones it easily.  |
| **Speed**               | Slower, especially for complex meals.             | Faster since the template is copied directly. |
| **Consistency**         | Manual errors might occur.                        | Cloning ensures consistency.                  |
| **Use Case**            | Useful for unique or new meals.                   | Perfect for repeating popular meals.          |

---

## **Funny Note**  
Imagine your chef is exhausted after manually creating **"50 Cheeseburgers"** for a hungry crowd. Enter the **Prototype Pattern**: clone the burger once and serve them instantly. The chef saves time and avoids flipping patties until their arms fall off. 🍔🍕👨‍🍳  

Happy coding and cloning! 🎉
