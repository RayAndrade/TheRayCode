
namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            LightBulb bulb = new LightBulb();

            for (int i = 0; i < 5; i++)
            {
                bulb.Switch();
            }
        }
    }
}