using System;

namespace Show
{
    public class MicroUSBCharger : IMicroUSBPhone
    {
        public void Recharge()
        {
            Console.WriteLine("Recharge started");
            Console.WriteLine("Recharge finished");
        }

        public void UseMicroUSB()
        {
            Console.WriteLine("MicroUSB connected");
        }
    }
}