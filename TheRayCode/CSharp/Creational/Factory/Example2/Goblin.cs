using System;

namespace Show
{
    public class Goblin: IMonster
    {
        public void Roar()
        {
            Console.WriteLine("The goblin growls menacingly!");
        }
    }
}