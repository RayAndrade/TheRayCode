using System;

namespace Show
{
    public abstract class AbstractClass
    {
        // The 'TemplateMethod' is the skeleton of an algorithm.
        // It is made final to prevent its structure from being altered.
        public void TemplateMethod()
        {
            BaseOperation();
            RequiredOperations1();
            RequiredOperation2();
            Hook1();
        }

        // A common operation used by the template method.
        void BaseOperation()
        {
            Console.WriteLine("BaseOperation: Common operation for all subclasses");
        }

        // These operations have to be implemented in subclasses.
        protected abstract void RequiredOperations1();
        protected abstract void RequiredOperation2();

        // Hooks provide additional extension points in some parts of the algorithm.
        protected virtual void Hook1() { }
    }
}