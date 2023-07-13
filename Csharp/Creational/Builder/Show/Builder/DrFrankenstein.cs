namespace Builder
{
    public class DrFrankenstein
    {
        public void Construct(IMonster monster)
        {
            monster.SetName("Frank");
            monster.SetCatchPhase("They did the monster mash");
            monster.SetHeadType("flat");
        }
    }
}