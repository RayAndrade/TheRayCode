[up](../README.md)

Certainly! Let's use the Bridge design pattern with a different theme. This time, we will model a printing system where the abstraction is a `Document` and its implementation is `Printer`. This demonstrates how documents can be printed on different types of printers without coupling the document types to the printer types.

### Structure

1. **`Printer.cs`** - An interface representing different types of printers.
2. **`InkjetPrinter.cs` and `LaserPrinter.cs`** - Implementations of the `Printer` interface.
3. **`Document.cs`** - An abstraction representing documents.
4. **`Program.cs`** - The main entry point of the application demonstrating the use of the Bridge pattern.

### Explanation

#### `Printer.cs`
```csharp
public interface Printer
{
    void Print(string content);
}
```
- **Purpose**: Defines the interface for different printers.
- **Methods**: Basic operation `Print`, which takes the document content.

#### `InkjetPrinter.cs`
```csharp
public class InkjetPrinter : Printer
{
    public void Print(string content)
    {
        Console.WriteLine("Inkjet Printer: " + content);
    }
}
```
- **Purpose**: Specific implementation of a `Printer`, an inkjet printer in this case.
- **Details**: Contains behavior specific to inkjet printing.

#### `LaserPrinter.cs`
```csharp
public class LaserPrinter : Printer
{
    public void Print(string content)
    {
        Console.WriteLine("Laser Printer: " + content);
    }
}
```
- **Purpose**: Another implementation of `Printer`, a laser printer.

#### `Document.cs`
```csharp
public class Document
{
    private Printer printer;

    public Document(Printer printer)
    {
        this.printer = printer;
    }

    public void Print(string content)
    {
        printer.Print(content);
    }
}
```
- **Purpose**: Acts as a bridge between the `Printer` interface and its concrete implementations.
- **Details**: Contains the logic to print the document using any type of printer.

#### `Program.cs`
```csharp
class Program
{
    static void Main(string[] args)
    {
        Printer inkjetPrinter = new InkjetPrinter();
        Document document = new Document(inkjetPrinter);

        document.Print("Hello, world!"); // Prints using the inkjet printer

        Printer laserPrinter = new LaserPrinter();
        document = new Document(laserPrinter);

        document.Print("Hello, world again!"); // Prints using the laser printer
    }
}
```
- **Purpose**: Demonstrates the usage of the Bridge pattern.
- **Expected Output**: 
  ```
  Inkjet Printer: Hello, world!
  Laser Printer: Hello, world again!
  ```

### Order of Creation

1. **Create `Printer` Interface** - The foundation of the pattern, defining the operations for printers.
2. **Implement `Printer` in `InkjetPrinter` and `LaserPrinter`** - Concrete implementations of the printer types.
3. **Create `Document` Class** - The abstraction that uses the `Printer` interface.
4. **Implement `Program.cs`** - To demonstrate the working of the pattern.

This example illustrates how you can change the type of printer for a document without changing the document's code, demonstrating the flexibility provided by the Bridge design pattern.
