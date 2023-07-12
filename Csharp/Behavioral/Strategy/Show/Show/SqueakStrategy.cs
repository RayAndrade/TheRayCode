using System;

namespace Show
{
    public class SqueakStrategy: ICommunicationStrategy
    {
        public void Communicate()
        {
            Console.WriteLine("Squeak!");
        }
    }
}