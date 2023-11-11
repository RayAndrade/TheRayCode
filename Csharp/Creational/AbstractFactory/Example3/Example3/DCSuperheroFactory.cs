using System;

namespace Example3
{
    public class DCSuperheroFactory : ISuperheroFactory
    {
        public IDCSuperhero CreateDCHero()
        {
            // Let's randomly select a DC superhero
            var heroes = new IDCSuperhero[] { new Superman(), new Batman(), new WonderWoman() };
            return heroes[new Random().Next(heroes.Length)];
        }

        public IMarvelSuperhero CreateMarvelHero()
        {
            throw new System.NotImplementedException();
        }
    }
}