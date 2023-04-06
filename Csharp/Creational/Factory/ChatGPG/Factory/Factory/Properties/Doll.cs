using System;

namespace TheRayCode.Factory.Properties
{
    public class Doll: IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a doll...");
        }
    }
}