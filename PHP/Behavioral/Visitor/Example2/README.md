[up](../README.md)

Certainly! The Visitor design pattern is all about adding further operations to objects without having to modify them. 

In this example, we'll create a simple file structure system where we have `File` and `Folder` classes. The `Visitor` pattern will be used to display information about the file structure.

**Order to Create Classes**:

1. `Element` Interface: It will contain an `accept` method for objects to accept a visitor.
2. `Visitor` Interface: This will provide the basis for creating different types of visitor classes.
3. `File` and `Folder` classes: These will implement the `Element` interface.
4. `DisplayVisitor` class: This will implement the `Visitor` interface and display information about the file structure.
5. `index.php`: This will be our demo file.

Let's dive into the classes.

**1. Element.php**:
```php
<?php
interface Element {
    public function accept(Visitor $visitor);
}
?>
```

**2. Visitor.php**:
```php
<?php
interface Visitor {
    public function visitFile(File $file);
    public function visitFolder(Folder $folder);
}
?>
```

**3a. File.php**:
```php
<?php
include_once 'Element.php';

class File implements Element {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function accept(Visitor $visitor) {
        $visitor->visitFile($this);
    }
}
?>
```

**3b. Folder.php**:
```php
<?php
include_once 'Element.php';

class Folder implements Element {
    private $name;
    private $elements = [];

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function addElement(Element $element) {
        $this->elements[] = $element;
    }

    public function getElements() {
        return $this->elements;
    }

    public function accept(Visitor $visitor) {
        $visitor->visitFolder($this);
        foreach ($this->elements as $element) {
            $element->accept($visitor);
        }
    }
}
?>
```

**4. DisplayVisitor.php**:
```php
<?php
include_once 'Visitor.php';
include_once 'File.php';
include_once 'Folder.php';

class DisplayVisitor implements Visitor {
    public function visitFile(File $file) {
        echo "File: " . $file->getName() . "<br>";
    }

    public function visitFolder(Folder $folder) {
        echo "Folder: " . $folder->getName() . "<br>";
    }
}
?>
```

**5. index.php**:
```php
<?php
include_once 'File.php';
include_once 'Folder.php';
include_once 'DisplayVisitor.php';

$root = new Folder('Root');
$document = new Folder('Documents');
$img = new File('image.jpg');
$doc = new File('document.docx');

$document->addElement($img);
$document->addElement($doc);
$root->addElement($document);

$visitor = new DisplayVisitor();
$root->accept($visitor);
?>
```

**What you should see in the browser when accessing `index.php`**:

```
Folder: Root
Folder: Documents
File: image.jpg
File: document.docx
```

In this example, the `DisplayVisitor` class lets us display the names of files and folders without the need for the `File` or `Folder` classes to know anything about display logic. You can add more visitors for different functionalities without modifying the existing structures.
