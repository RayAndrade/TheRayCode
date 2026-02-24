using System;

namespace Show
{
    public class RealSubject : Subject
    {
        public void Request()
        {
            Console.WriteLine("Handling Request.");
        }
    }
}