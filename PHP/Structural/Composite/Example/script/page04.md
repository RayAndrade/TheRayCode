[strart](/page01.md) | [back](/page03.md) | [next](/page05.md)

## Create Composite Objects
The Leaf class represents end objects of a composition. 

A leaf can't have any children. 

Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.

Create **class**
```
FileLeaf
```
it
```
 implements FileComponent
```
add required methodeds

we add the private variables
```
private $name;
private $size;
```
and
```
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



