namespace Builder
{
    public interface IMonster
    {
        void SetName(string name);
        void SetCatchPhase(string phrase);
        void SetHeadType(string type);
        
        Monster GetMonster();
    }
}