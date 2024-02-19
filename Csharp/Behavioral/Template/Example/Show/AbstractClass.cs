using System;

namespace Show
{
    public abstract class AbstractClass
    {
        // The template method defines the skeleton of an algorithm.
        public void TemplateMethod()
        {
            BaseOperation();
            RequiredOperations();
            OptionalHook();
        }

        // A common operation used by all subclasses.
        protected void BaseOperation()
        {
            Console.WriteLine("Base Operation: Common to all classes.");
        }

        // A step that must be implemented by subclasses.
        protected abstract void RequiredOperations();

        // A hook operation with a default implementation. Subclasses may override this.
        protected abstract void OptionalHook();
    }
}