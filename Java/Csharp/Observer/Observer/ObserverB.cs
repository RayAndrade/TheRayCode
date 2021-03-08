using System;

namespace TheRayCode.Observer
{
    class ObserverB : IObserver
    {
        public void Update(ISubject subject)
        {
            if ((subject as Subject).State == 0 || (subject as Subject).State >= 2)
            {
                Console.WriteLine("ObserverB: Reacted to the event.");
            }
        }
    }
}