namespace Factory
{
    using System;
    public class SilverCustomer : ICustomer
    {
        public void AddPoints()
        {
            Console.WriteLine("Silver Customer - Points Added");
        }

        public void AddDiscount()
        {
            Console.WriteLine("Silver Customer - Discount Added");
        }
        public void SilverOperation()
        {
            Console.WriteLine("Operation specific to Silver Customer");
        }
    }
}