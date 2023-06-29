using System;

namespace Show2
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            PizzaChef pizzaChef = new PizzaChef();

            // Create a Margherita pizza
            IPizzaBuilder margheritaBuilder = new MargheritaPizzaBuilder();
            pizzaChef.SetPizzaBuilder(margheritaBuilder);
            Pizza margheritaPizza = pizzaChef.BuildPizza();

            // Create a Pepperoni pizza
            IPizzaBuilder pepperoniBuilder = new PepperoniPizzaBuilder();
            pizzaChef.SetPizzaBuilder(pepperoniBuilder);
            Pizza pepperoniPizza = pizzaChef.BuildPizza();

            // Display the pizzas
            margheritaPizza.Display();
            Console.WriteLine();
            pepperoniPizza.Display();
        }
    }
}