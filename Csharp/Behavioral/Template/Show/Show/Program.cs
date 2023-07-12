namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            AbstractPet dog = new Dog();
            dog.DailyRoutine();

            AbstractPet cat = new Cat();
            cat.DailyRoutine();
        }
    }
}