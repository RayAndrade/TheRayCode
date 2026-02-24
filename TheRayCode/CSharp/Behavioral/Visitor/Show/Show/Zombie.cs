namespace Show
{
    public class Zombie: IMonster
    {
        public void Accept(IMonsterVisitor visitor)
        {
            visitor.Visit(this);
        }
    }
}