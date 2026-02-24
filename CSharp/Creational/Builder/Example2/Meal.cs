namespace Show
{
    public class Meal
    {
        public string MainCourse { get; set; }
        public string Side { get; set; }
        public string Drink { get; set; }

        public override string ToString()
        {
            return $"Main Course: {MainCourse}, Side: {Side}, Drink: {Drink}";
        }
    }
}