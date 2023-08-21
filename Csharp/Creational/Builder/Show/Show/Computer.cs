namespace Show
{
    public class Computer
    {
        public string CPU { get; set; }
        public string RAM { get; set; }
        public string HDD { get; set; }

        public override string ToString()
        {
            return $"CPU: {CPU}, RAM: {RAM}, HDD: {HDD}";
        }
    }
}