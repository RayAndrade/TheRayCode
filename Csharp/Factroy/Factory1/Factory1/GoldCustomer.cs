

namespace Factory1
{
    using System;
    public class GoldCustomer : ICustomer
    {
        // 3:40
        public void AddPoints()
        {
            Console.WriteLine("Gold Customer - Points Added");
        }

        public void AddDiscount()
        {
            Console.WriteLine("Gold Customer - Discount Added");
        }

        public void GoldOperation()
        {
            Console.WriteLine("Operation specific to Gold Customer"); 
        }
        
    }
}