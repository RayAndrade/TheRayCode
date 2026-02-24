using System;

namespace Show
{
    public class LightningPhone
    {
        private bool connector;

        public void Recharge()
        {
            if (connector)
            {
                Console.WriteLine("Recharge started");
                Console.WriteLine("Recharge finished");
            }
            else
            {
                Console.WriteLine("Connect Lightning first");
            }
        }

        public void UseLightning()
        {
            connector = true;
            Console.WriteLine("Lightning connected");
        }
    }
}