namespace Show
{
    public class StandardMealBuilder : IMealBuilder
    {
        private Meal _meal = new Meal();
        
        public void BuildMainCourse()
        {
            _meal.MainCourse = "Steak";
        }

        public void BuildSide()
        {
            _meal.Side = "Fries";
        }

        public void BuildDrink()
        {
            _meal.Drink = "Cola";
        }

        public Meal GetMeal()
        {
            return _meal;
        }
    }
}