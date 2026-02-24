namespace Show
{
    public class ToyCarBuilder: IToyBuilder
    {
        private Toy _toy = new Toy();

        public void BuildWheels()
        {
            _toy.Wheels = "4 wheels";
        }

        public void BuildBody()
        {
            _toy.Body = "Car body";
        }

        public void Paint()
        {
            _toy.Color = "Red";
        }

        public Toy GetToy()
        {
            return _toy;
        }
    }
}