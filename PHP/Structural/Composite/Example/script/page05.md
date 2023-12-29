[strart](./page01.md) | [back](./page04.md) | [next](./page06.md)
## Step 3: Create Composite Objects

create php **class**
```
DirectoryComposite
```
have it
```
require_once 'FileComponent.php';
```
then it
```
 implements FileComponent
```
add required methods

at the top:
```
private $name;
private $children;
```
then
```
public function __construct($name) {
   $this->name = $name;
   $this->children = [];
}
```
create an **add** function for nodes we want to add
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



