[strart](/page01.md) | [back](/page02.md) | [next](/page04.md)

## Step 2:  Create Leaf Objects**

The Leaf class represents end objects of a composition. 

A leaf can't have  any children. 

Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.

Create **class**
```
FileLeaf
```
have it
```
require_once 'FileComponent.php';
```
at the top

it
```
 implements FileComponent
```

The Leaf class represents end objects of a composition. 

A leaf can't have any children. 

Typically, Leaf objects do the actual work, while Composite objects only delegate to their sub-components.

For **getSize** & **getName** we need the privite variables
```
 private $name;
 private $size;
```
for
```
public function __construct($name, $size) {
    $this->name = $name;
    $this->size = $size;
}
```


so for **getSize**
```
return $this->size;
```
and for **getName**
```
return $this->name;
```

