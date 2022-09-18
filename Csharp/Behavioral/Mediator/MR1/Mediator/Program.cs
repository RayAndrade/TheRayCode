using System;

namespace TheRayCode.Mediator
{
  
    
    class Program
    {
        static void Main(string[] args)
        {
            // The client code.
            ConcreateColleage1 concreateColleage1 = new ConcreateColleage1();
            ConcreateColleage2 concreateColleage2 = new ConcreateColleage2();
            new ConcreteMediator(concreateColleage1, concreateColleage2);

            Console.WriteLine("Client triggets operation A.");
            concreateColleage1.DoA();

            Console.WriteLine();

            Console.WriteLine("Client triggers operation D.");
            concreateColleage2.DoD();
        }
    }
}
