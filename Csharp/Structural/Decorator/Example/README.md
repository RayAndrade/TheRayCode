[up](../README.md)

The Composite design pattern is a structural pattern used to treat individual objects and compositions of objects uniformly. It's often used to represent part-whole hierarchies. In C#, you can implement this pattern by creating a common interface or abstract class representing both individual objects and their compositions.

Let's design a simple file system example with files and directories to illustrate the Composite pattern. In this example, a directory can contain files or other directories.

1. **Component (IFileSystemItem.cs):**
   - This is an interface or abstract class defining common operations for both simple and complex objects.

2. **Leaf (File.cs):**
   - Represents the leaf objects in the composition. A leaf has no children.

3. **Composite (Directory.cs):**
   - Defines behavior for components having children. Stores child components and implements child-related operations in the component interface.

4. **Client (Program.cs):**
   - Interacts with objects in the composition through the component interface.

### Step-by-Step Implementation

1. **Create the Component (IFileSystemItem.cs):**
   ```csharp
   public interface IFileSystemItem
   {
       void Display(string indent = "");
   }
   ```

2. **Create the Leaf (File.cs):**
   ```csharp
   public class File : IFileSystemItem
   {
       private string _name;

       public File(string name)
       {
           _name = name;
       }

       public void Display(string indent = "")
       {
           Console.WriteLine($"{indent}{_name}");
       }
   }
   ```

3. **Create the Composite (Directory.cs):**
   ```csharp
   public class Directory : IFileSystemItem
   {
       private string _name;
       private List<IFileSystemItem> _items = new List<IFileSystemItem>();

       public Directory(string name)
       {
           _name = name;
       }

       public void AddItem(IFileSystemItem item)
       {
           _items.Add(item);
       }

       public void Display(string indent = "")
       {
           Console.WriteLine($"{indent}{_name}");
           foreach (var item in _items)
           {
               item.Display(indent + "  ");
           }
       }
   }
   ```

4. **Create the Client (Program.cs):**
   ```csharp
   class Program
   {
       static void Main(string[] args)
       {
           Directory root = new Directory("root");
           Directory dir1 = new Directory("dir1");
           Directory dir2 = new Directory("dir2");

           File file1 = new File("file1");
           File file2 = new File("file2");
           File file3 = new File("file3");

           root.AddItem(dir1);
           root.AddItem(file1);

           dir1.AddItem(file2);
           dir1.AddItem(dir2);

           dir2.AddItem(file3);

           root.Display();
       }
   }
   ```

### Running the Program
When you run the program, you should see an output representing the hierarchical structure of the file system:

```
root
  dir1
    file2
    dir2
      file3
  file1
```

This output demonstrates the composite pattern in action, where directories (composites) and files (leaves) are treated uniformly and their hierarchical structure is displayed.
