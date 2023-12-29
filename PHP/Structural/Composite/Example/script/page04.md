[strart](./page01.md) | [back](./page03.md) | [next](./page05.md)


## Step 3: Create Composite Objects
Create **class**
```
DirectoryComposite
```
have it
```
require_once 'FileComponent.php';
```
so it can
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
to **add** chidren
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
and for **getName**
```
return $this->name;
```
