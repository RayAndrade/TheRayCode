using System;

namespace Factory
{
    public class Train: IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a train....");
        }
    }
}