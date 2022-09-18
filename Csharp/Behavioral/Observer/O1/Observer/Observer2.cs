using System;

namespace TheRayCode.Observer
{
    class Observer2 : IObserver
    {
        public void Update(ISubject subject)
        {
            if ((subject as Subject).State == 0 || (subject as Subject).State >= 2)
            {
                Console.WriteLine("Observer2: Reacted to the event.");
            }
        }
    }
}