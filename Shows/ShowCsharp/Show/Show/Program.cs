using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Address address = new Address("123 Main St", "Cityville");
            Person person1 = new Person("John", address);

// Shallow copy
            Person person2 = person1.ShallowCopy();
            person2.Name = "Jane";
            person2.Address.City = "Townsville";

// Deep copy
            Person person3 = person1.DeepCopy();
            person3.Name = "Mike";
            person3.Address.City = "Villageville";

            Console.WriteLine(person1);  // Output: Name: John, Address: 123 Main St, Villageville
            Console.WriteLine(person2);  // Output: Name: Jane, Address: 123 Main St, Townsville
            Console.WriteLine(person3);  // Output: Name: Mike, Address: 123 Main St, Villageville

        }
    }
}