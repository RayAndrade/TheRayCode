using System;

namespace Show
{
    public class OnState: LightBulbState
    {
        public override void Handle(LightBulb lightBulb)
        {
            Console.WriteLine("The light bulb is already on. Be careful not to overuse it!");
        }
    }
}