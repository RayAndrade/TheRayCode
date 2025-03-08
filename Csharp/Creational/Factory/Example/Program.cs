namespace Progam;
using System;

class Program
{
    static void Main()
    {
        Creator creatorA = new ConcreteCreatorA();
        IProduct productA = creatorA.FactoryMethod();
        productA.Use(); // Output: Using ConcreteProductA
        
        Creator creatorB = new ConcreteCreatorB();
        IProduct productB = creatorB.FactoryMethod();
        productB.Use(); // Output: Using ConcreteProductB
    }
}