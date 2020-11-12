using System;

namespace TheRayCode.Observer
{
    
    // Concrete Observers react to the updates issued by the Subject they had
    // been attached to.
    class ObserverA : IObserver
    {
        public void Update(ISubject subject)
        {            
            if ((subject as Subject).State < 3)
            {
                Console.WriteLine("ConcreteObserverA: Reacted to the event.");
            }
        }
    }
}