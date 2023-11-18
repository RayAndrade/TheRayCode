namespace Show
{
    public interface Device
    {
        bool IsEnabled();
        void Enable();
        void Disable();
        int GetVolume();
        void SetVolume(int percent);

    }
}