using System;

namespace Show
{
    public class DemonBook: Artifact
    {
        public override void Curse(string victim)
        {
            Console.WriteLine($"The DemonBook opens by itself, releasing an ancient demon to haunt {victim}...");
        }
    }
}