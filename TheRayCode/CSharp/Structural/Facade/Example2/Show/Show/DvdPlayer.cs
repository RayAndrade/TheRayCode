using System;

namespace Show
{
    public class DvdPlayer
    {
        public void TurnOn() => Console.WriteLine("DVD Player is on.");
        public void PlayMovie(string movie) => Console.WriteLine($"Playing \"{movie}\".");
        // Additional methods and properties relevant to the DVD player...

    }
}