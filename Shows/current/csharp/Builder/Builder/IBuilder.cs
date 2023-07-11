namespace Builder
{
    public interface IBuilder
    {
        void SetName(string name);
        void SetBodyType(string bodyType);
        void SetEyeColor(string color);
        Monster GetMonster();
    }
}