using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IMonster myDragon = MonsterFactory.GetMonster("Dragon");
            myDragon.Roar();

            IMonster myGoblin = MonsterFactory.GetMonster("Goblin");
            myGoblin.Roar();
        }
    }
}