namespace Show
{
    public class VegetarianMealBuilder: IMealBuilder
    {
        private Meal _meal = new Meal();

        public void BuildMainCourse()
        {
            _meal.MainCourse = "Veggie Burger";
        }

        public void BuildSide()
        {
            _meal.Side = "Salad";
        }

        public void BuildDrink()
        {
            _meal.Drink = "Juice";
        }

        public Meal GetMeal()
        {
            return _meal;
        }

    }
}