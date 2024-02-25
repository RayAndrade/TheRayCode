using System;

namespace Show
{
    public abstract class AbstractClass
    {
        // The template method defines the skeleton of an algorithm.
        public void TemplateMethod()
        {
            PrimitiveOperation1();
            PrimitiveOperation2();
            Console.WriteLine("");
        }

        // These operations have to be implemented in subclasses.
        protected abstract void PrimitiveOperation1();
        protected abstract void PrimitiveOperation2();
    }
}