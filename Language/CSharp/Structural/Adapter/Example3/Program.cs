using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            LightningPhone lightningPhone = new LightningPhone();
            IMicroUSBPhone adapter = new LightningToMicroUSBAdapter(lightningPhone);

            adapter.UseMicroUSB();
            adapter.Recharge();
        }
    }
}