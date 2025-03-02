[home](./page01.md) | [back](./page04.md)

# Step 4: Demonstrate the Composite Pattern
At the **index.php** page

# 1.
```
require_once 'FileLeaf.php';
require_once 'DirectoryComposite.php';
```

Create files
# 2.
```
$file1 = new FileLeaf("File1.txt", 210);
$file2 = new FileLeaf("File2.txt", 310);
```
Create a directory and add files
# 3.
```
$directory = new DirectoryComposite("Directory");
$directory->add($file1);
$directory->add($file2);
```
Create a subdirectory and add it to the directory
# 4.
```
$subdirectory = new DirectoryComposite("Subdirectory");
$subdirectory->add(new FileLeaf("SubFile1.txt", 110));
$directory->add($subdirectory);
```
Display the size of the directory
# 5.
```
echo "Total Size of '" . $directory->getName() . "': " . $directory->getSize() . " bytes";
```


[page 6](./page06.md)
