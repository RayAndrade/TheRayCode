using System;
namespace Show
{
    class Visitor2: IVisitor
    {
        public void VisitComponentA(ComponentA element)
        {
            Console.WriteLine(element.ExclusiveMethodOfComponentA() + " + Visitor2");
        }

        public void VisitComponentB(ComponentB element)
        {
            Console.WriteLine(element.SpecialMethodOfComponentB() + " + Visitor2");
        }
    }
}