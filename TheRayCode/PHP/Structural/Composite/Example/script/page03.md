[strart](./page01.md) | [back](./page02.md) | [next](./page04.md)
## File LEAF

The Leaf class represents end objects of a composition. 

A leaf can't have any children.

Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.

**1**
```
FileLeaf
```

**2** and it
```
require_once 'FileComponent.php';
```
**3** so we can 
```
 implements FileComponent
```
The Leaf class represents end objects of a composition. 

A leaf can't have any children. 

**4** Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.

At the top we have **private** vables **name** and **size**
```
private $name;
private $size;
```
**5** we construct the Leaf object
```
public function __construct($name, $size) {
    $this->name = $name;
    $this->size = $size;
}
```
**6** return size
```
return $this->size;
```
and name
```
return $this->name;
```
[next](./page04.md)
