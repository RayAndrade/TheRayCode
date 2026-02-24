namespace Show
{
    public interface IMonsterVisitor
    {
        void Visit(Zombie zombie);
        void Visit(Vampire vampire);
    }
}