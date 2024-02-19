[up](README.md)

For teaching the Template Method pattern using C#, it's great to align with the terminology and examples similar to those found in "Design Patterns" by the Gang of Four (GoF). The Template Method pattern defines the skeleton of an algorithm in a method, deferring some steps to subclasses. This allows subclasses to redefine certain steps of an algorithm without changing the algorithm's structure.

Here's an example that demonstrates the Template Method pattern. We'll use a simple scenario of a `DataProcessor` base class that outlines the steps to process data, and two concrete subclasses, `CsvDataProcessor` and `JsonDataProcessor`, that implement these specific steps.

### 1. DataProcessor.cs (Abstract Class)

This is the abstract class that defines the template method and the skeleton of the algorithm. It has methods that will be common for all subclasses and abstract methods that subclasses must implement.

```csharp
public abstract class DataProcessor
{
    // The template method defines the skeleton of an algorithm.
    public void ProcessData()
    {
        ReadData();
        ProcessDataCore();
        WriteData();
    }

    // These are the steps that need to be implemented by subclasses.
    protected abstract void ReadData();
    protected abstract void ProcessDataCore();
    protected abstract void WriteData();
}
```

### 2. CsvDataProcessor.cs (Concrete Class)

This class implements the data processing steps for CSV formatted data.

```csharp
public class CsvDataProcessor : DataProcessor
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
```

### 3. JsonDataProcessor.cs (Concrete Class)

This class implements the data processing steps for JSON formatted data.

```csharp
public class JsonDataProcessor : DataProcessor
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
```

### 4. Program.cs (Demonstration)

This file will demonstrate the use of the Template Method pattern.

```csharp
class Program
{
    static void Main(string[] args)
    {
        DataProcessor csvProcessor = new CsvDataProcessor();
        csvProcessor.ProcessData();

        Console.WriteLine();

        DataProcessor jsonProcessor = new JsonDataProcessor();
        jsonProcessor.ProcessData();
    }
}
```

### Order of Creation

1. **DataProcessor.cs**: Start with the abstract class that defines the template method and the skeleton of the algorithm.
2. **CsvDataProcessor.cs & JsonDataProcessor.cs**: These concrete classes implement the abstract methods defined in `DataProcessor`.
3. **Program.cs**: Finally, demonstrate the use of your classes in the `Main` method.

### Output When You Run the Code

When you run `Program.cs`, you should see the following output, demonstrating that each step of the process is handled according to the type of data being processed:

```
Reading CSV data...
Processing CSV data...
Writing CSV data...

Reading JSON data...
Processing JSON data...
Writing JSON data...
```

This example follows the Template Method pattern by defining a series of steps in a process and allowing subclasses to provide the specific implementation for each step without changing the overall process's structure. This pattern is useful for avoiding duplication and ensuring a consistent process while allowing for flexibility in the steps' specifics.
