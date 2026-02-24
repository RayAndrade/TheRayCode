namespace Show
{
    public interface ISuperheroFactory
    {
        IDCSuperhero CreateDCHero();
        IMarvelSuperhero CreateMarvelHero();
    }
}