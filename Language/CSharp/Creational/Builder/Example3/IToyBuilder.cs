namespace Show
{
    public interface IToyBuilder
    {
        void BuildWheels();
        void BuildBody();
        void Paint();
        Toy GetToy();
    }
}