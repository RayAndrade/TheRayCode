using System;

namespace TheRayCode.Proxy
{
    class RealSubject : ISubject
    {
        public void Request()
        {
            Console.WriteLine("RealSubject: Handling Request.");
        }
    }

}