using System;

namespace Exmple
{
    public class CsvDataProcessor: DataProcessor
    {
        protected override void ReadData()
        {
            Console.WriteLine("Reading CSV data...");
        }

        protected override void ProcessDataCore()
        {
            Console.WriteLine("Processing CSV data...");
        }

        protected override void WriteData()
        {
            Console.WriteLine("Writing CSV data...");
        }
    }
}