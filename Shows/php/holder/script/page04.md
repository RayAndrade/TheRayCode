[home](./page01.md) | [back](./page03.md)

# Step 3: Create DirectoryComposite Object


The Leaf class represents end objects of a composition. 
A leaf can't have any children. 
Typically, Leaf objects do the actual work, while Composite  objects only delegate to their sub-components.

Create **class**:
```
DirectoryComposite
```
at the top
```
require_once 'FileComponent.php';
```
and it
```
 implements FileComponent
```
add the methods required

at the  top we have the varables
```
private $name;
private $children;
```
add the *constructer*
```
public function __construct($name, $size) {
    $this->name = $name;
    $this->size = $size;
}
```

Create an **add** function
```
public function add(FileComponent $component) {
    $this->children[] = $component;
}
```

for **getSize** we have
```
$totalSize = 0;
foreach ($this->children as $child) {
    $totalSize += $child->getSize();
}
return $totalSize;
```
and for **getName** we have
```
return $this->name;
```

[page 5](./page05.md)
