using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Building a toy car
            IToyBuilder carBuilder = new ToyCarBuilder();
            Director director = new Director(carBuilder);
            director.ConstructToy();
            Toy car = director.GetToy();
            Console.WriteLine(car);

            // Building a toy robot
            IToyBuilder robotBuilder = new ToyRobotBuilder();
            director = new Director(robotBuilder);
            director.ConstructToy();
            Toy robot = director.GetToy();
            Console.WriteLine(robot);
        }
    }
}