using System;

namespace Show
{
    public class RoarStrategy: ICommunicationStrategy
    {
        public void Communicate()
        {
            Console.WriteLine("Roar!");
        }
    }
}