using System;

namespace Show
{
    public class Proxy : Subject
    {
        private RealSubject _realSubject;
        
        public Proxy(RealSubject realSubject)
        {
            this._realSubject = realSubject;
        }
        
        public void Request()
        {
            if (this.CheckAccess())
            {
                this._realSubject.Request();
                this.LogAccess();
            }
        }
        public bool CheckAccess()
        {
            // Some real checks should go here.
            Console.WriteLine("Checking access prior to firing a real request.");
            return true;
        }
        
        public void LogAccess()
        {
            Console.WriteLine("Proxy: Logging the time of request.");
        }
    }
}