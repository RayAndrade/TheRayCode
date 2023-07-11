namespace Builder
{
    public class MonsterBuilderDrFrank : IBuilder
    {
        private Monster _monster = new Monster();
    
        public void SetName(string name)
        {
            _monster.Name = name;
        }
        
        public void SetBodyType(string bodyType)
        {
            _monster.BodyType = bodyType;
        }

        public void SetEyeColor(string color)
        {
            _monster.EyeColor = color;
        }

        public Monster GetMonster()
        {
            return _monster;
        }
    }
}