using System;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            EmployeeAdaptee emplo = new EmployeeAdaptee();
            string finalOutput = string.Format("Total {0} {1}", 
                emplo.ContractEmployeeData(), emplo.FullTimeEmployeeData());
            emplo.GetQualifiedData();
            
            Console.WriteLine(finalOutput);
        }
    }
}