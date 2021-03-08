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
            var observerA = new ObserverA();
            subject.Attach(observerA);

            var observerB = new ObserverB();
            subject.Attach(observerB);

            subject.SomeBusinessLogic();
            subject.SomeBusinessLogic();

            subject.Detach(observerB);

            subject.SomeBusinessLogic();
        }
    }
}
