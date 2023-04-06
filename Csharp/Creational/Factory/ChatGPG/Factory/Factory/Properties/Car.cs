using System;

namespace TheRayCode.Factory.Properties
{
    public class Car: IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a car...");
        }
    }
}