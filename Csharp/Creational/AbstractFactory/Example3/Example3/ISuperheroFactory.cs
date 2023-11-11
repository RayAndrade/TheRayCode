namespace Example3
{
    public interface ISuperheroFactory
    {
        IDCSuperhero CreateDCHero();
        IMarvelSuperhero CreateMarvelHero();
    }
}