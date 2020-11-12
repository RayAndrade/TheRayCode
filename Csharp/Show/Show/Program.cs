using System;

namespace Show
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine();
            Console.WriteLine();
            
            Client client = new Client();
            Abstraction abstraction;

            abstraction = new Abstraction(new ConcreteImplementationA());
            client.ClientCode(abstraction);

            abstraction = new Abstraction(new ConcreteImplementationB());
            client.ClientCode(abstraction);

            Console.WriteLine();
            Console.WriteLine("The Ray Code show is AWESOME!!!");
        }
    }
}