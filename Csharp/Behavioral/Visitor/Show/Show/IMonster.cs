namespace Show
{
    public interface IMonster
    {
        void Accept(IMonsterVisitor visitor);
    }
}