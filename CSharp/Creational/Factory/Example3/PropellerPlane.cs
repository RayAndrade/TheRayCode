using System;

namespace Show
{
    public class PropellerPlane: IAirplane
    {
        public void Fly()
        {
            Console.WriteLine("The propeller plane flies leisurely through the clouds.");
        }
    }
}