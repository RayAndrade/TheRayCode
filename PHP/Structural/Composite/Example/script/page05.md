[strart](./page01.md) | [back](./page04.md) | [next](./page06.md)

## Demonstrate in the index
add to the top
```
require_once 'FileLeaf.php';
require_once 'DirectoryComposite.php';
```

### 1
Create files
```
$file1 = new FileLeaf("File1.txt", 210);
$file2 = new FileLeaf("File2.txt", 310);
```

### 2
Create a directory and add files
```
$directory = new DirectoryComposite("Directory");
$directory->add($file1);
$directory->add($file2)
```
### 3
Create a subdirectory and add it to the directory
```
$subdirectory = new DirectoryComposite("Subdirectory");
$subdirectory->add(new FileLeaf("SubFile1.txt", 110));
$directory->add($subdirectory);
```
### 4
Display the size of the directory
```
echo "Total Size of '" . $directory->getName() . "': " . $directory->getSize() . " bytes";
```

