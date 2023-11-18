using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Device tv = new TV();
            RemoteControl remote = new RemoteControl(tv);

            remote.TogglePower(); // Turns TV on
            remote.VolumeUp(); // Increases volume

            Console.WriteLine("TV Status: " + (tv.IsEnabled() ? "On" : "Off"));
            Console.WriteLine("TV Volume: " + tv.GetVolume());

        }
    }
}