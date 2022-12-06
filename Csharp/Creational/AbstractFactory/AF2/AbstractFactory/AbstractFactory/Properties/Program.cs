namespace AbstractFactory.Properties
{
    class Program
    {
        static void Main(string[] args)
        {
            Client entrepreneur = new Client(new ElegantClothesFactory());
            entrepreneur.DescribeYourClothes();
            Console.WriteLine($"Entrepreneur: {entrepreneur.DescribeYourClothes()} \n");

            Client student = new Client(new CasualClothesFactory());
            Console.WriteLine($"Student: {student.DescribeYourClothes()}"); 

            Console.ReadKey();
        }
    }
}