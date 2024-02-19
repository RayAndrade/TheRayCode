using System;

namespace Show
{
    public abstract class BeverageRecipe
    {
        // Template method
        public void PrepareRecipe()
        {
            BoilWater();
            Brew();
            PourInCup();
            AddCondiments();
        }

        private void BoilWater()
        {
            Console.WriteLine("Boiling water");
        }

        protected abstract void Brew();

        private void PourInCup()
        {
            Console.WriteLine("Pouring into cup");
        }

        protected abstract void AddCondiments();
    }
}