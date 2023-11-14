namespace Show
{
    public interface IMealBuilder
    {
        void BuildMainCourse();
        void BuildSide();
        void BuildDrink();
        Meal GetMeal();
    }
}