namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IMonster zombie = new Zombie();
            IMonster vampire = new Vampire();
            IMonsterVisitor visitor = new MonsterVisitor();

            zombie.Accept(visitor);
            vampire.Accept(visitor);
        }
    }
}