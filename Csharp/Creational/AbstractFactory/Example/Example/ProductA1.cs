using System;

namespace Example
{
    public class ProductA1: AbstractProductA
    {
        public override void Interact(AbstractProductB b)
        {
            Console.WriteLine(this.GetType().Name + " interacts with " + b.GetType().Name);
        }
       
    }
}