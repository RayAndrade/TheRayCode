using System;

namespace TheRayCode.Observer
{
    
    // Concrete Observers react to the updates issued by the Subject they had
    // been attached to.
    class Observer1 : IObserver
    {
        public void Update(ISubject subject)
        {            
            if ((subject as Subject).State < 3)
            {
                Console.WriteLine("Concrete Observer1: Reacted to the event.");
            }
        }
    }
}