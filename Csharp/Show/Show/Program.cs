using System;

namespace Show
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Client client = new Client();

            var simple = new ConcreteComponent();
            Console.WriteLine("Client: I get a simple component:");
            client.ClientCode(simple);
            Console.WriteLine();

            // other decorators as well.
            ConcreteDecoratorA decorator1 = new ConcreteDecoratorA(simple);
            ConcreteDecoratorB decorator2 = new ConcreteDecoratorB(decorator1);

            Console.WriteLine("Client: Now I've got a decorated component:");
            client.ClientCode(decorator2);

            
            Console.WriteLine();
            Console.WriteLine("The Ray Code show is AWESOME!!!");
        }
        
    }
}