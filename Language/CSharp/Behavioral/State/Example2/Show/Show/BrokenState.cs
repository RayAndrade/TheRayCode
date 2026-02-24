using System;

namespace Show
{
    public class BrokenState : LightBulbState
    {
        public override void Handle(LightBulb lightBulb)
        {
            Console.WriteLine("The light bulb is broken. It needs to be replaced!");
        }
    }
}