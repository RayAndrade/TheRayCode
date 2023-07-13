using System;

namespace Builder
{
    public class Monster
    {
        public string Name { get; set; }
        public string CatchPhrase { get; set; }
        public string HeadType { get; set; }
        
        public void Describe()
        {
            Console.WriteLine($"Monster name is {Name} he says {CatchPhrase} and his head type is {HeadType}");
        }
    }
}