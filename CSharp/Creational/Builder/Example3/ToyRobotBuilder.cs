namespace Show
{
    public class ToyRobotBuilder: IToyBuilder
    {
        private Toy _toy = new Toy();

        public void BuildWheels()
        {
            _toy.Wheels = "2 wheels and 2 legs";
        }

        public void BuildBody()
        {
            _toy.Body = "Robot body";
        }

        public void Paint()
        {
            _toy.Color = "Silver";
        }

        public Toy GetToy()
        {
            return _toy;
        }
    }
}