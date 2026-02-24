using System;

namespace Show
{
    public class MonsterFactory
    {
        public static IMonster GetMonster(string monsterType)
        {
            switch (monsterType)
            {
                case "Dragon":
                    return new Dragon();
                case "Goblin":
                    return new Goblin();
                default:
                    throw new ArgumentException("Invalid monster type");
            }
        }
    }
}