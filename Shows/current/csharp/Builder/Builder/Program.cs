namespace Builder
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            DirectorIgor directorIgor = new DirectorIgor();
            MonsterBuilderDrFrank builderDrFrank = new MonsterBuilderDrFrank();
        
            // Director uses the builder to construct the object
            directorIgor.Construct(builderDrFrank);
        
            Monster monster = builderDrFrank.GetMonster();
        
            monster.Describe();
        }
    }
}