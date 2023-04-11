using System;

namespace Factory
{
    public class Car: IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a car....");
        }
    }
}