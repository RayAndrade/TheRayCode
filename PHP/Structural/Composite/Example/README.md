[up](../README.md)


Teaching the Composite design pattern in PHP is a great way to introduce students to both advanced object-oriented programming concepts and design patterns. The Composite pattern is particularly useful for treating individual objects and compositions of objects uniformly.

In the Composite pattern, you typically have a component interface, leaf objects, and composite objects. The component interface defines default behavior for all objects, leaf objects perform actual operations, and composite objects store child components (which can be leaf or composite objects).

Let's create a simple example: a file system with directories and files. Directories can contain files or other directories.

### Step 1: Define the Component Interface

**FileComponent.php**
```php
<?php

// The component interface declares common operations for both simple and
// complex objects of a composition.
interface FileComponent {
    public function getSize();
    public function getName();
}
```

### Step 2: Create Leaf Objects

**FileLeaf.php**
```php
<?php

require_once 'FileComponent.php';

// The Leaf class represents end objects of a composition. A leaf can't have
// any children. Typically, Leaf objects do the actual work, while Composite
// objects only delegate to their sub-components.
class FileLeaf implements FileComponent {
    private $name;
    private $size;

    public function __construct($name, $size) {
        $this->name = $name;
        $this->size = $size;
    }

    public function getSize() {
        return $this->size;
    }

    public function getName() {
        return $this->name;
    }
}
```

### Step 3: Create Composite Objects

**DirectoryComposite.php**
```php
<?php

require_once 'FileComponent.php';

// The Composite class represents complex components that may have children.
// Composite objects usually delegate the actual work to their children and
// "sum-up" the result.
class DirectoryComposite implements FileComponent {
    private $name;
    private $children;

    public function __construct($name) {
        $this->name = $name;
        $this->children = [];
    }

    public function add(FileComponent $component) {
        $this->children[] = $component;
    }

    public function getSize() {
        $totalSize = 0;
        foreach ($this->children as $child) {
            $totalSize += $child->getSize();
        }
        return $totalSize;
    }

    public function getName() {
        return $this->name;
    }
}
```

### Step 4: Demonstrate the Composite Pattern

**index.php**
```php
<?php

require_once 'FileLeaf.php';
require_once 'DirectoryComposite.php';

// Create files
$file1 = new FileLeaf("File1.txt", 210);
$file2 = new FileLeaf("File2.txt", 310);

// Create a directory and add files
$directory = new DirectoryComposite("Directory");
$directory->add($file1);
$directory->add($file2);

// Create a subdirectory and add it to the directory
$subdirectory = new DirectoryComposite("Subdirectory");
$subdirectory->add(new FileLeaf("SubFile1.txt", 110));
$directory->add($subdirectory);

// Display the size of the directory
echo "Total Size of '" . $directory->getName() . "': " . $directory->getSize() . " bytes";
```

### Order of Creation

1. **FileComponent.php**: Define the component interface.
2. **FileLeaf.php**: Implement the leaf objects.
3. **DirectoryComposite.php**: Implement the composite objects.
4. **index.php**: Demonstrate the usage of the Composite pattern.

### Expected Output

When you run `index.php`, you should see the total size of the directory, which includes the sizes of all files in it and its subdirectories. The output will be:

```
Total Size of 'Directory': 630 bytes
```

This example demonstrates how the Composite pattern can be used to work with tree-like structures. Students can see how both individual files and directories (which can contain other files or directories) are treated uniformly through the `FileComponent` interface.
