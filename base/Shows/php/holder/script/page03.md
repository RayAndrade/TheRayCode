[home](./page01.md) | [back](./page02.md)

# Step 2: Create Leaf Objects
The Leaf class represents end objects of a composition. 
A leaf can't have  any children. Typically, Leaf objects do the actual work, while Composite
objects only delegate to their sub-components.

Create **class**:
```
FileLeaf
```
**At the top**
```
 require_once 'FileComponent.php';
```
and at the class it
```
 implements FileComponent
```
We need to add required methods but first at the top we add our variables
```
private $name;
private $size;
```
and constructor
```
public function __construct($name, $size) {
    $this->name = $name;
    $this->size = $size;
}
```
for **getSize** and 
```
return $this->size;
```
and for **getName**
```
return $this->name;
```

[page 4](./page04.md)
