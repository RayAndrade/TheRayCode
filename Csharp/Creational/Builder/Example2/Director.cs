namespace Show
{
    public class Director
    {
        private IMealBuilder _mealBuilder;

        public Director(IMealBuilder mealBuilder)
        {
            _mealBuilder = mealBuilder;
        }

        public void ConstructMeal()
        {
            _mealBuilder.BuildMainCourse();
            _mealBuilder.BuildSide();
            _mealBuilder.BuildDrink();
        }

        public Meal GetMeal()
        {
            return _mealBuilder.GetMeal();
        }

    }
}