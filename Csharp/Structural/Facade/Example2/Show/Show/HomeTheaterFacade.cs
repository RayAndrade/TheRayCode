using System;

namespace Show
{
    public class HomeTheaterFacade
    {
        private Amplifier _amp;
        private DvdPlayer _dvd;
        private Projector _projector;

        public HomeTheaterFacade(Amplifier amp, DvdPlayer dvd, Projector projector)
        {
            _amp = amp;
            _dvd = dvd;
            _projector = projector;
        }

        public void WatchMovie(string movie)
        {
            Console.WriteLine("Get ready to watch a movie...");
            _amp.TurnOn();
            _amp.SetVolume(5);
            _projector.TurnOn();
            _projector.SetInput(_dvd);
            _dvd.TurnOn();
            _dvd.PlayMovie(movie);
        }

        // Additional methods to facilitate other functionalities...
 
    }
}