namespace Builder
{
    public class MonsterBuilder : IMonster
    {
        private Monster _monster = new Monster();
        
        public void SetName(string name)
        {
            _monster.Name = name;
        }

        public void SetCatchPhase(string phrase)
        {
            _monster.CatchPhrase = phrase;
        }

        public void SetHeadType(string type)
        {
            _monster.HeadType = type;
        }

        public Monster GetMonster()
        {
            return _monster;
        }
    }
}