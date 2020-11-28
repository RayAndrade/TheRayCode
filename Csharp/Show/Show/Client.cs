using System;

namespace Show
{
    class Client
    {
        public void ClientCode(Component component)
        {
            Console.WriteLine("RESULT: " + component.Operation());
        }
    }
}