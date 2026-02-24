namespace Progam;
using System;

class Program
 {
     static void Main()
     {
         Singleton singleton1 = Singleton.Instance();
         singleton1.ShowMessage();
         
         Singleton singleton2 = Singleton.Instance();
         
         if (singleton1 == singleton2)
         {
             Console.WriteLine("Both Singleton instances are the SAME object.");
         }
         else
         {
             Console.WriteLine("ERROR: Singleton instances are different! (This should not happen)");
         }
         PlainClass plain1 = new PlainClass();
         PlainClass plain2 = new PlainClass();
         if (plain1 == plain2)
         {
             Console.WriteLine("ERROR: PlainClass instances are the same! (This should not happen)");
         }
         else
         {
             Console.WriteLine("PlainClass instances are DIFFERENT objects.");
         }
     }
     
 }