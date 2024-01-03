[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

create **class**
```
DirectoryComposite
```
at the top have it
```
require_once 'FileComponent.php';
```
so it can
```
 implements FileComponent
```
add the required methods

at the top
```
 private $name;
private $children;

public function __construct($name) {
    $this->name = $name;
    $this->children = [];
}
```
add the function **add** to leafs to the **children[] array**
```
$this->children[] = $component;
```
for **getSize**
```
$totalSize = 0;
foreach ($this->children as $child) {
    $totalSize += $child->getSize();
}
return $totalSize;
```
we have to cycle the elements we added to the array

and for **getName**
```
return $this->name;
```




