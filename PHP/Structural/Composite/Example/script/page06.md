[strart](/page01.md) | [back](/page05.md) | [next](/page07.md)
## Step 4: Demonstrate the Composite Pattern

at **index.php**
```
$file1 = new FileLeaf("File1.txt", 210);
$file2 = new FileLeaf("File2.txt", 310);
```

Create a directory and add files
```
$directory = new DirectoryComposite("Directory");
$directory->add($file1);
$directory->add($file2);
```

Create a subdirectory and add it to the directory
```
$subdirectory = new DirectoryComposite("Subdirectory");
$subdirectory->add(new FileLeaf("SubFile1.txt", 110));
$directory->add($subdirectory);
```

Display the size of the directory
```
echo "Total Size of '" . $directory->getName() . "': " . $directory->getSize() . " bytes";
```

