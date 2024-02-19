using System;

namespace Exmple
{
    public class JsonDataProcessor: DataProcessor
    {
        protected override void ReadData()
        {
            Console.WriteLine("Reading JSON data...");
        }

        protected override void ProcessDataCore()
        {
            Console.WriteLine("Processing JSON data...");
        }

        protected override void WriteData()
        {
            Console.WriteLine("Writing JSON data...");
        }
    }
}