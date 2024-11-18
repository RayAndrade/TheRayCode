public class Main {
    public static void main(String[] args) {
        MealFactory italianFactory = new ItalianMealFactory();
        MealFactory indianFactory = new IndianMealFactory();

        MainCourse italianMainCourse = italianFactory.createMainCourse();
        Dessert italianDessert = italianFactory.createDessert();

        MainCourse indianMainCourse = indianFactory.createMainCourse();
        Dessert indianDessert = indianFactory.createDessert();

        italianMainCourse.serve();
        italianDessert.serve();
        indianMainCourse.serve();
        indianDessert.serve();
    }
}