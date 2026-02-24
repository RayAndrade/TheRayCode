using System;

namespace Show
{
    public abstract class AbstractClass
    {
        public void TemplateMethod()
        {
            BaseOperation();
            RequiredOperations();
            OptionalHook();
        }
        
        protected void BaseOperation()
        {
            Console.WriteLine("Base Operation: Common to all classes.");
        }
        
        protected abstract void RequiredOperations();
        
        protected virtual void OptionalHook()
        {
            // Default implementation
        }
        
    }
}