[home](/page01.md) | [next page](/page04.md) | [back](/page02.md)

create php **class** file:
```
FileLeaf
```
at the top
```
require_once 'FileComponent.php';
```
The Leaf class represents end objects of a composition. 
```
 implements FileComponent 
```
A leaf can't have any children. 
Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.
```
private $name;
private $size;

public function __construct($name, $size) {
   $this->name = $name;
   $this->size = $size;
}
```
We add the required method (auto-generate)

for **getSize**
```
return $this->size;
```
for **getName**
```
 return $this->name;
```


