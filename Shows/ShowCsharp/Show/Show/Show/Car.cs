using System;

namespace Show
{
    public class Car: IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a car....");
        }
    }
}