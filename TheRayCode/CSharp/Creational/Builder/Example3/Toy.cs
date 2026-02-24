namespace Show
{
    public class Toy
    {
        public string Wheels { get; set; }
        public string Body { get; set; }
        public string Color { get; set; }

        public override string ToString()
        {
            return $"Wheels: {Wheels}, Body: {Body}, Color: {Color}";
        } 
    }
}