[strart](./page01.md) | [back](./page03.md) | [next](./page05.md)

Mow we create a **Directory Composite**

**3** Create composite object **DirectoryComposite**
```
DirectoryComposite
```
at the top we require **File Component**
```
require_once 'FileComponent.php';
```
and implement it
```
 implements FileComponent
```
add the required methods

at the top **private varables for name & children**
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
now to to **add** chidren we create a add method to the **ARRAY**
```
public function add(FileComponent $component) {
   $this->children[] = $component;
}
```
for **get Size** we need to sum up the number of children in the array
```
$totalSize = 0;
foreach ($this->children as $child) {
    $totalSize += $child->getSize();
}
return $totalSize;
```
and for **get Name**
```
return $this->name;
```
