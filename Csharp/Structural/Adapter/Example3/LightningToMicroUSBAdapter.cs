using System;

namespace Show
{
    public class LightningToMicroUSBAdapter : IMicroUSBPhone
    {
        private readonly LightningPhone _lightningPhone;

        public LightningToMicroUSBAdapter(LightningPhone lightningPhone)
        {
            _lightningPhone = lightningPhone;
        }

        public void Recharge()
        {
            _lightningPhone.Recharge();
        }

        public void UseMicroUSB()
        {
            Console.WriteLine("MicroUSB connected");
            _lightningPhone.UseLightning();
        }
    }
}