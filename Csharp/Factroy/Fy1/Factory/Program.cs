namespace Factory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            BaseCustomerFactory c = new GoldCustomerFactory();
            ICustomer objCust = c.GetCustomer();
            
            //Console.WriteLine("Hello World!");
        }
    }
}