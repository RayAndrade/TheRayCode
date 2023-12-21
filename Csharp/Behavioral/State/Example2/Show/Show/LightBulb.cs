using System;
using System.Threading;

namespace Show
{
    public class LightBulb
    {
        public LightBulbState State { get; set; }

        public LightBulb()
        {
            // Initial state
            State = new OffState();
        }

        public void Switch()
        {
            State.Handle(this);
            Thread.Sleep(42);
            // Simulate the chance of breaking
            if (State is OnState && new Random().Next(10) == 0)
            {
                State = new BrokenState();
            }
        }
    }
}