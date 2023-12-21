using System;
using System.Collections.Generic;
using System.Threading;

namespace TheRayCode.Observer
{
    
 
    class Program
    {
        static void Main(string[] args)
        {
            // The client code.
            var subject = new Subject();
            var observer1 = new Observer1();
            subject.Attach(observer1);

            var observer2 = new Observer2();
            subject.Attach(observer2);

            subject.SomeBusinessLogic();
            subject.SomeBusinessLogic();

            subject.Detach(observer2);

            subject.SomeBusinessLogic();
        }
    }
}
