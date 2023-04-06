using System;

namespace TheRayCode.Factory.Properties
{
    public class Train : IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a train...");
        }
    }
}