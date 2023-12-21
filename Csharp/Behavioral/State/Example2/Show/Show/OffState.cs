using System;

namespace Show
{
    public class OffState: LightBulbState
    {
        public override void Handle(LightBulb lightBulb)
        {
            Console.WriteLine("Light bulb turned on.");
            lightBulb.State = new OnState();
        }
    }
}