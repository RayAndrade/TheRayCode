using System;
using System.Collections.Generic;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            
            IClientAdapter iClientAdapter = new ClientAdapter();
            
            iClientAdapter = new ClientAdapter();
            Client objClient = new Client(iClientAdapter);
            List<string> listOfString = objClient.GetListOfClientItem();
            foreach (var item in listOfString)
            {
                Console.WriteLine(item);
                
            }

            Console.ReadKey();
            Console.WriteLine("The Ray Code is AWESOME!!!");
        }
       
    }
}