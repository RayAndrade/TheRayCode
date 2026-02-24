public class Main {
    public static void main(String[] args) {
        SandwichMaker breadMaker = new BreadMaker();
        SandwichMaker lettuceAdder = new LettuceAdder();
        SandwichMaker cheeseSpreader = new CheeseSpreader();

        breadMaker.setNextMaker(lettuceAdder);
        lettuceAdder.setNextMaker(cheeseSpreader);

        System.out.println("Making a sandwich with bread:\n");
        breadMaker.addIngredient("bread");

        System.out.println("\nMaking a sandwich with lettuce:\n");
        breadMaker.addIngredient("lettuce");

        System.out.println("\nMaking a sandwich with pickles:\n");
        breadMaker.addIngredient("pickles");
    }
}