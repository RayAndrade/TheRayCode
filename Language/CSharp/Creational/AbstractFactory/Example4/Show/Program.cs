using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ISuperheroFactory dcFactory = new DCSuperheroFactory();
            var dcHero = dcFactory.CreateDCHero();
            Console.WriteLine(dcHero.SaveTheDay());

            ISuperheroFactory marvelFactory = new MarvelSuperheroFactory();
            var marvelHero = marvelFactory.CreateMarvelHero();
            Console.WriteLine(marvelHero.SaveTheDay());
        }
    }
}