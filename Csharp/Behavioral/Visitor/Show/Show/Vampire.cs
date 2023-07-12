namespace Show
{
    public class Vampire: IMonster
    {
        public void Accept(IMonsterVisitor visitor)
        {
            visitor.Visit(this);
        }
    }
}