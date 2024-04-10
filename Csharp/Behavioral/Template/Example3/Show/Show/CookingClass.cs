using System;

namespace Show
{
    public abstract class CookingClass
    {
        // Template method
        public void MakeDish()
        {
            PrepareIngredients();
            Cook();
            Serve();
        }

        protected abstract void PrepareIngredients();
        protected abstract void Cook();
        protected void Serve()
        {
            Console.WriteLine("The dish is ready and served with a sprinkle of humor!");
        }
    }
}