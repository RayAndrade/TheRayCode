using System;

namespace Show
{
    public class Projector
    {
        public void TurnOn() => Console.WriteLine("Projector is on.");
        public void SetInput(DvdPlayer player) => Console.WriteLine("DVD player set as input.");
        // Additional methods and properties relevant to the projector...
    }
}