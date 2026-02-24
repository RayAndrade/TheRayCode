public class ItalianMealFactory implements MealFactory  {
    @Override
    public MainCourse createMainCourse() {
        return new ItalianMainCourse();
    }

    @Override
    public Dessert createDessert() {
        return new ItalianDessert();
    }
}
