public class BreadMaker extends SandwichMaker{
    @Override
    public void addIngredient(String ingredient) {
        if (ingredient.equals("bread")) {
            System.out.println("BreadMaker: Toasting the bread. Nice and crispy!");
        } else {
            System.out.println("BreadMaker: I only deal with bread. Passing on...");
            if (nextMaker != null) nextMaker.addIngredient(ingredient);
        }
    }
}
