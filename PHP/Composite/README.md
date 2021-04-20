# TheRayCode
## Composite pattern php

This example illustrates the structure of the Composite design pattern and focuses on the following questions:

What roles do these classes play?
In what way the elements of the pattern are related?
<ol>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ol>

The base Component can declare an interface for setting and accessing a parent of the component in a tree structure. 
It can also provide some default implementation for these methods.

In some cases, it would be beneficial to define the child-management operations right in the base Component class. 
This way, you won't need to expose any concrete component classes to the client code, even during the object tree assembly. 
The downside is that these methods will be empty for the leaf-level components.

You can provide a method that lets the client code figure out whether a component can bear children.
The base Component may implement some default behavior or leave it to concrete classes (by declaring the method containing the behavior as"abstract").

```php
abstract class Component
{
    protected $parent;

    public function setParent(Component $parent)
    {
        $this->parent = $parent;
    }

    public function getParent(): Component
    {
        return $this->parent;
    }

    public function add(Component $component): void { }
    public function remove(Component $component): void { }

    public function isComposite(): bool
    {
        return false;
    }

    abstract public function operation(): string;
}
```

The Composite class represents the complex components that may have children.
Usually, the Composite objects delegate the actual work to their children and then "sum-up" the result.

 A composite object can add or remove other components (both simple or complex) to or from its child list.
 
 The Composite executes its primary logic in a particular way. 
 It traverses recursively through all its children, collecting and summing their results. 
 Since the composite's children pass these calls to their children and so forth, the whole object tree is traversed as a result.
     
```php
include_once ('Component.php');

class Composite extends Component
{
    protected $children;

    public function __construct()
    {
        $this->children = new \SplObjectStorage();
    }

    public function add(Component $component): void
    {
        $this->children->attach($component);
        $component->setParent($this);
    }

    public function remove(Component $component): void
    {
        $this->children->detach($component);
        $component->setParent(null);
    }
    public function isComposite(): bool
    {
        return true;
    }

    public function operation(): string
    {
        $results = [];
        foreach ($this->children as $child) {
            $results[] = $child->operation();
        }

        return "Branch(" . implode("+", $results) . ")";
    }
}
```

The Leaf class represents the end objects of a composition. 
A leaf can't have any children.

Usually, it's the Leaf objects that do the actual work, whereas Composite objects only delegate to their sub-components.

```php
class Leaf extends Component
{
    public function operation(): string
    {
        return "Leaf";
    }
}
```

The client code works with all of the components via the base interface.
This way the client code can support the simple leaf components as well as the complex composites.

```php
include_once ('Composite.php');
include_once ('Leaf.php');

function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}

$simple = new Leaf();
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "\n\n";

$tree = new Composite();
$branch1 = new Composite();
$branch1->add(new Leaf());
$branch1->add(new Leaf());
$branch2 = new Composite();
$branch2->add(new Leaf());
$tree->add($branch1);
$tree->add($branch2);
echo "Client: Now I've got a composite tree:<br/>";
clientCode($tree);
echo "<br/><br/>";

```
Thanks to the fact that the child-management operations are declared in the  base Component class, the client code can work with any component, simple or complex, without depending on their concrete classes.


```php
function clientCode2(Component $component1, Component $component2)
{
    // ...

    if ($component1->isComposite()) {
        $component1->add($component2);
    }
    echo "RESULT: " . $component1->operation();

    // ...
}

echo "Client: I don't need to check the components classes even when managing the tree:\n";
clientCode2($tree, $simple);
```

Now let's run this in a browser and we whould get:

```php
Client: I've got a simple component:
RESULT: Leaf Client: Now I've got a composite tree:
RESULT: Branch(Branch(Leaf+Leaf)+Branch(Leaf))

Client: I don't need to check the components classes even when managing the tree: RESULT: Branch(Branch(Leaf+Leaf)+Branch(Leaf)+Leaf)
```

[Wikipedia](https://en.wikipedia.org/wiki/Composite_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
