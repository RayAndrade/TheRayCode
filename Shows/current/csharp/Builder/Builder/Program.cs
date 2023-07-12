using System;

namespace Builder
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            DirectorFrankenstein drFrank = new DirectorFrankenstein();
            IgoreMonsterBuilder igor = new IgoreMonsterBuilder();
        
            // Director uses the builder to construct the object
            drFrank.Construct(builderDrFrank);
        
            Monster monster = builderDrFrank.GetMonster();
        
            monster.Describe();
        }
    }
}