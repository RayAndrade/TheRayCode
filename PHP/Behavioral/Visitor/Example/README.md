[up](../README.md)


This code is based on the **Visitor Design Pattern**. This pattern is mainly used for separating an algorithm from an object structure on which it operates. It's particularly useful when dealing with object structures that won't change frequently but the operations applied over them might. 

I'll explain each file's purpose and its components:

1. **Component.php**
   - `Component`: An interface that declares an `accept` method which takes a `Visitor` object as an argument. Every element that can be visited will implement this interface.

```php
interface Component
{
    public function accept(Visitor $visitor): void;
}
```

2. **ComponentA.php**
   - `ComponentA`: This class implements the `Component` interface. When its `accept` method is called, it directs the call to the visitor's `visitComponentA` method, allowing the visitor to perform some operation on the ComponentA instance.
   - `exclusiveMethodOfComponentA()`: This is a unique method to the `ComponentA` class which returns the string "A".

```php
class ComponentA implements Component
{
    public function accept(Visitor $visitor): void
    {
        $visitor->visitComponentA($this);
    }

    public function exclusiveMethodOfComponentA(): string
    {
        return "A";
    }
}
```
3. **ComponentB.php**
   - `ComponentB`: Similarly to `ComponentA`, it also implements the `Component` interface. Its `accept` method redirects the call to the visitor's `visitComponentB` method.
   - `specialMethodOfComponentB()`: A unique method to the `ComponentB` class which returns the string "B".
   

```php
class ComponentB implements Component
{
    public function accept(Visitor $visitor): void
    {
        $visitor->visitComponentB($this);
    }

    public function specialMethodOfComponentB(): string
    {
        return "B";
    }
}
```

4. **Visitor.php**
   - `Visitor`: An interface that declares visit methods for all types of visitable components. It ensures that each `Visitor` implementation has methods to handle both `ComponentA` and `ComponentB`.


```php
interface Visitor
{
    public function visitComponentA(ComponentA $element): void;
    public function visitComponentB(ComponentB $element): void;
}
```

5. **Visitor1.php**
   - `Visitor1`: This class implements the `Visitor` interface. It defines what should be done when a `ComponentA` or `ComponentB` is visited by an instance of `Visitor1`.


```php
class Visitor1 implements Visitor
{
    public function visitComponentA(ComponentA $element): void
    {
        echo $element->exclusiveMethodOfComponentA() . " + Visitor1<br/>";
    }

    public function visitComponentB(ComponentB $element): void
    {
        echo $element->specialMethodOfComponentB() . " + Visitor1<br/>";
    }
}
```

6. **Visitor2.php**
   - `Visitor2`: Another implementation of the `Visitor` interface. Similarly to `Visitor1`, it defines actions when visiting the components but potentially could do something different.

```php
class Visitor2 implements Visitor
{
    public function visitComponentA(ComponentA $element): void
    {
        echo $element->exclusiveMethodOfComponentA() . " + Visitor2<br/>";
    }

    public function visitComponentB(ComponentB $element): void
    {
        echo $element->specialMethodOfComponentB() . " + Visitor2<br/>";
    }
}
```


7. **index.php**
   - This is the entry point where all components are put into action.
   - First, the necessary files are included.
   - The `clientCode` function receives an array of components and a visitor. For each component, it calls the component's `accept` method which then calls the appropriate method on the visitor.
   - `new ComponentA` and `new ComponentB` creates instances of the components.
   - `new Visitor1` and `new Visitor2` creates instances of the visitors.
   - The two calls to `clientCode` demonstrates how the same components can be operated on by different visitors, producing different results.


**index.php**

```php
include_once ('Component.php');
include_once ('ComponentA.php');
include_once ('ComponentB.php');
include_once ('Visitor.php');
include_once ('Visitor1.php');
include_once ('Visitor2.php');

function clientCode(array $components, Visitor $visitor)
{
    // ...
    foreach ($components as $component) {
        $component->accept($visitor);
    }
    // ...
}

$components = [
    new ComponentA,
    new ComponentB,
];

echo "The client code works with all visitors via the base Visitor interface:<br/>";
$visitor1 = new Visitor1;
clientCode($components, $visitor1);
echo "<br/>";

echo "It allows the same client code to work with different types of visitors:<br/>";
$visitor2 = new Visitor2;
clientCode($components, $visitor2);
```


**Result on the Browser**: 

This displays the combination of the return values of each component's special method and the type of visitor visiting it. First with `Visitor1` and then with `Visitor2`.

```run
The client code works with all visitors via the base Visitor interface:
A + Visitor1
B + Visitor1

It allows the same client code to work with different types of visitors:
A + Visitor2
B + Visitor2
```

To sum up, this design allows you to add further operations over the components (`ComponentA`, `ComponentB`, ...) without altering the component classes. Instead, you'll create a new `Visitor` implementing the desired operation.

