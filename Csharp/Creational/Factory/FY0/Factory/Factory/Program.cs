namespace Factory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            BaseCustomerFactory c = new SilverCustomerFactory();
            ICustomer objCust = c.GetCustomer();
        }
    }
}