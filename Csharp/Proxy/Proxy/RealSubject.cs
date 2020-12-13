using System;

namespace TheRayCode.Proxy
{
    class RealSubject : Subject
    {
        public void Request()
        {
            Console.WriteLine("RealSubject: Handling Request.");
        }
    }

}