using System;

namespace Show
{
    public class Proxy: ISubject
    {
        private RealSubject _realSubject;

        public Proxy(RealSubject realSubject)
        {
            _realSubject = realSubject;
        }

        public void Request()
        {
            if (CheckAccess())
            {
                _realSubject.Request();
                LogAccess();
            }
        }

        private bool CheckAccess()
        {
            // Here, you can put some real access control logic.
            Console.WriteLine("Proxy: Checking access before firing a real request.");
            return true;
        }

        private void LogAccess()
        {
            Console.WriteLine("Proxy: Logging the time of request.");
        }
    }
}