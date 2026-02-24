using System;

namespace Show
{
    public class Amplifier
    {
        public void TurnOn() => Console.WriteLine("Amplifier is on.");
        public void SetVolume(int level) => Console.WriteLine($"Volume set to {level}.");
        // Additional methods and properties relevant to the amplifier...
    }
}