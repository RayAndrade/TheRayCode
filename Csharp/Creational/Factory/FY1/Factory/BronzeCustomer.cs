using System;

namespace Factory
{
    public class BronzeCustomer: ICustomer
    {
        public void AddPoints()
        {
            Console.WriteLine("Bronze Customer - Points Added");
        }

        public void AddDiscount()
        {
            Console.WriteLine("Bronze Customer - Discount Added");
        }
        public void BronzeOperation()
        {
            Console.WriteLine("Operation specific to Bronze Customer"); 
        } 
    }
}