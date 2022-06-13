namespace Factory
{
    using System;
    public class GoldCustomer: ICustomer
    {
        public void AddPoints()
        {
            Console.WriteLine("Gold Customer - Discount Added");
        }

        public void AddDiscount()
        {
            Console.WriteLine("Operation specific to Gold Customer");
        }
        public void GoldOperation()
        {
            Console.WriteLine("Operation specific to Gold Customer"); 
        }
    }
}