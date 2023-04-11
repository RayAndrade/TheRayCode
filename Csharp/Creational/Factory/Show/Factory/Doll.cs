using System;

namespace Factory
{
    public class Doll: IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a doll...");
        }
    }
}