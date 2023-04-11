using System;

namespace Factory
{
    public class ToyFactory
    {
        public static IToy CreateToy(string type)
        {
            switch (type)
            {
                case "doll":
                    return new Doll();
                case "car":
                    return new Car();
                case "train":
                    return new Train();
                default:
                    throw new ArgumentException("Invalid toy type");
            }
        }

    }
}