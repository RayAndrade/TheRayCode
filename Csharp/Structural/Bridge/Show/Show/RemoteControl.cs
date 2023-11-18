namespace Show
{
    public class RemoteControl
    {
        protected Device device;

        public RemoteControl(Device device)
        {
            this.device = device;
        }

        public void TogglePower()
        {
            if (device.IsEnabled())
                device.Disable();
            else
                device.Enable();
        }

        public void VolumeUp()
        {
            device.SetVolume(device.GetVolume() + 10);
        }

        // Additional methods for control

    }
}