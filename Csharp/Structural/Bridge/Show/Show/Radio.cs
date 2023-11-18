namespace Show
{
    public class Radio: Device
    {
        private bool on = false;
        private int volume = 10;

        public bool IsEnabled() => on;

        public void Enable() => on = true;

        public void Disable() => on = false;

        public int GetVolume() => volume;

        public void SetVolume(int percent) => volume = percent;
    }
}