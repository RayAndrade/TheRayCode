namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var factory = new FlyweightFactory();

            var flyweightA = factory.GetFlyweight("StateA");
            var flyweightB = factory.GetFlyweight("StateB");
            var flyweightA1 = factory.GetFlyweight("StateA"); // Reuses existing flyweight

            flyweightA.Operation("ExternalState1");
            flyweightB.Operation("ExternalState2");
            flyweightA1.Operation("ExternalState3");
        }
    }
}