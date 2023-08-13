public class CheeseSpreader extends SandwichMaker{
    @Override
    public void addIngredient(String ingredient) {
        if (ingredient.equals("cheese")) {
            System.out.println("CheeseSpreader: Adding a thick slice of cheese. Yummy!");
        } else {
            System.out.println("CheeseSpreader: Cheese, please! Handing off...");
            if (nextMaker != null) nextMaker.addIngredient(ingredient);
        }
    }
}
