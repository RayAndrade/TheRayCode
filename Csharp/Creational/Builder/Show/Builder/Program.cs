using System;

namespace Builder
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            DrFrankenstein drFrank = new DrFrankenstein();
            MonsterBuilder igor = new MonsterBuilder();
        
            // Director uses the builder to construct the object
            drFrank.Construct(igor);
        
            Monster monster = igor.GetMonster();
        
            monster.Describe();
        }
    }
}