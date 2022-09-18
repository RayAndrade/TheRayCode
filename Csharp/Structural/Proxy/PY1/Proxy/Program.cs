using System;

namespace TheRayCode.Proxy
{
    class Program
    {
        static void Main(string[] args)
        {
            Client client = new Client();

            Console.WriteLine("Executing the client code with a real subject:");
            RealSubject realSubject = new RealSubject();
            client.ClientCode(realSubject);

            Console.WriteLine();

            Console.WriteLine("Executing the same client code with a proxy:");
            Proxy proxy = new Proxy(realSubject);
            client.ClientCode(proxy);
        }
    }
}
