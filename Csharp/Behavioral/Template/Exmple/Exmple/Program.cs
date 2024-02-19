using System;

namespace Exmple
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            DataProcessor csvProcessor = new CsvDataProcessor();
            csvProcessor.ProcessData();

            Console.WriteLine();

            DataProcessor jsonProcessor = new JsonDataProcessor();
            jsonProcessor.ProcessData();
        }
    }
}