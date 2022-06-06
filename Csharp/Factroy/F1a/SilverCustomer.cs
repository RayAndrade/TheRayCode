namespace Factory1
{
    using System;
    public class SilverCustomer : ICustomer
    {
        // 3:40
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
            throw new NotImplementedException();
        }
    }
    
}