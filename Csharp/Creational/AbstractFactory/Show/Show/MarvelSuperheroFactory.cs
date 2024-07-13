namespace Show;

public class MarvelSuperheroFactory: ISuperheroFactory
{
    public IDCSuperhero CreateDCHero()
    {
        // This factory doesn't make DC heroes!
        throw new NotImplementedException();
    }

    public IMarvelSuperhero CreateMarvelHero()
    {
        // Let's randomly select a Marvel superhero
        var heroes = new IMarvelSuperhero[] { new Spiderman(), new Hulk(), new JessicaJones() };
        return heroes[new Random().Next(heroes.Length)];
    }
}