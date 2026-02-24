using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Amplifier amp = new Amplifier();
            DvdPlayer dvd = new DvdPlayer();
            Projector projector = new Projector();

            HomeTheaterFacade homeTheater = new HomeTheaterFacade(amp, dvd, projector);
            homeTheater.WatchMovie("Inception");

            Console.ReadLine();

        }
    }
}