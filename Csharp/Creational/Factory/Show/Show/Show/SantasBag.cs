using System;

namespace Show
{
    public class SantasBag
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