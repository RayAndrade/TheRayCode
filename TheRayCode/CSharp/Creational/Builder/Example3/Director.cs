namespace Show
{
    public class Director
    {
        private IToyBuilder _toyBuilder;

        public Director(IToyBuilder toyBuilder)
        {
            _toyBuilder = toyBuilder;
        }

        public void ConstructToy()
        {
            _toyBuilder.BuildWheels();
            _toyBuilder.BuildBody();
            _toyBuilder.Paint();
        }

        public Toy GetToy()
        {
            return _toyBuilder.GetToy();
        }
    }
}