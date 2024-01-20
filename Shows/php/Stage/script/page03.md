[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

create **class**
```
FileLeaf
```
have it
```
require_once 'FileComponent.php';
```
so we can
```
 implements FileComponent
```
The Leaf class represents end objects of a composition. 

A leaf can't have any children. 

Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.

we **implement** the methods required by **FileComponent**

at the top I add:
```
private $name;
private $size;

public function __construct($name, $size) {
    $this->name = $name;
    $this->size = $size;
}
```
for **getSize**
```
return $this->size;
```
and for **getName**
```
return $this->name;
```



[page 4](./page04.md)
