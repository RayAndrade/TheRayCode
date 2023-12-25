[home](./page01.md) | [back](./page04.md)

# Step 3: Create Composite Objects

Create class
```
DirectoryComposite
```
add
```
require_once 'FileComponent.php';
```
The Composite class represents complex components that may have children.
Composite objects usually delegate the actual work to their children and  *sum-up* the result.

Create class
```
DirectoryComposite
```
add
```
 implements FileComponent
```
add methods **getSize** & **getName** att the top

```
private $name;
private $children;
```
for **construct**
```
public function __construct($name) {
    $this->name = $name;
    $this->children = [];
}
```
for add
```
public function add(FileComponent $component) {
    $this->children[] = $component;
}
```
for **getSize**
```
 $totalSize = 0;
 foreach ($this->children as $child) {
     $totalSize += $child->getSize();
 }
 return $totalSize;
```
and **getName**
```
return $this->name;
```




[page 6](./page06.md)
