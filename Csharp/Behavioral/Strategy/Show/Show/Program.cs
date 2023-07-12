namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Animal lion = new Animal(new RoarStrategy());
            lion.Communicate();  // Output: Roar!

            Animal mouse = new Animal(new SqueakStrategy());
            mouse.Communicate();  // Output: Squeak!

            // Lion is feeling playful today and decides to squeak instead of roar
            lion.SetStrategy(new SqueakStrategy());
            lion.Communicate();  // Output: Squeak!
        }
    }
}