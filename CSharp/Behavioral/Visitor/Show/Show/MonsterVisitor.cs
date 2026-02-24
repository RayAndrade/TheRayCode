using System;

namespace Show
{
    public class MonsterVisitor: IMonsterVisitor
    {
        public void Visit(Zombie zombie)
        {
            Console.WriteLine("Visiting a Zombie!");
        }

        public void Visit(Vampire vampire)
        {
            Console.WriteLine("Visiting a Vampire!");
        }
    }
}