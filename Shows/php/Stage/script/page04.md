[home](./page01.md)

[back](./page03.md)

# Step 3: Create Composite Objects

```
require_once 'FileComponent.php';
```
The Leaf class represents end objects of a composition. 
A leaf can't have any children. 
Typically, Leaf objects do the actual work, while Composite  objects only delegate to their sub-components.

Create **class**:
```
FileLeaf
```
and it
```
implements FileComponent
```
add the methods required

at the  top we have the varables
```
private $name;
private $size;
```
add the *constructer*
```
public function __construct($name, $size) {
    $this->name = $name;
    $this->size = $size;
}
```
for **getSize** we have
```
return $this->size;
```
and for **getName** we have
```
return $this->name;
```

[page 5](./page05.md)
