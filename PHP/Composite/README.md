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

```php
class Leaf extends Component
{
    public function operation(): string
    {
        return "Leaf";
    }
}
```
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
