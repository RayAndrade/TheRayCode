using System;

namespace Builder
{
    public class Monster
    {
        public string Name { get; set; }
        public string BodyType { get; set; }
        public string EyeColor { get; set; }
    
        public void Describe()
        {
            Console.WriteLine($"Monster: {Name} with a {BodyType} body and eye color {EyeColor} eyes");
        }
    }
}