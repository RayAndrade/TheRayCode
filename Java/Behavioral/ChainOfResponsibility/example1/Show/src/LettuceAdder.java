public class LettuceAdder extends SandwichMaker {
    @Override
    public void addIngredient(String ingredient) {
        if (ingredient.equals("lettuce")) {
            System.out.println("LettuceAdder: Adding fresh green lettuce. Crunchy!");
        } else {
            System.out.println("LettuceAdder: Lettuce only, buddy. Next please...");
            if (nextMaker != null) nextMaker.addIngredient(ingredient);
        }
    }
}
