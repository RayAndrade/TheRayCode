using System;

namespace Composite
{
    internal class Program
    {
        class Client
        {
            public void ClientCode(Component leaf)
            {
                Console.WriteLine($"RESULT: {leaf.Operation()}\n");
            }
            public void ClientCode2(Component component1, Component component2)
            {
                if (component1.IsComposite())
                {
                    component1.Add(component2);
                }
            
                Console.WriteLine($"RESULT: {component1.Operation()}");
            }
        }

        
        public static void Main(string[] args)
        {
            Client client = new Client();

            Leaf leaf = new Leaf();
            Console.WriteLine("Client: I get a simple component:");
            client.ClientCode(leaf);

            Composite tree = new Composite();
            Composite branch1 = new Composite();
            branch1.Add(new Leaf());
            branch1.Add(new Leaf());
            Composite branch2 = new Composite();
            branch2.Add(new Leaf());
            tree.Add(branch1);
            tree.Add(branch2);
            Console.WriteLine("Client: Now I've got a composite tree:");
            client.ClientCode(tree);

            Console.Write("Client: I don't need to check the components classes even when managing the tree:\n");
            client.ClientCode2(tree, leaf);

        }
    }
}