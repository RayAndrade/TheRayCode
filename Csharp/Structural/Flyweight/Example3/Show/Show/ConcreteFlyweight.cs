using System;

namespace Show
{
    public class ConcreteFlyweight: IFlyweight
    {
        private string intrinsicState;

        public ConcreteFlyweight(string intrinsicState)
        {
            this.intrinsicState = intrinsicState;
        }
        
        public void Operation(string extrinsicState)
        {
            Console.WriteLine($"Intrinsic State = {intrinsicState}, Extrinsic State = {extrinsicState}");
        }
    }
}