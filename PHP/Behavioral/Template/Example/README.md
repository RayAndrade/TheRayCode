[up](../README.md)

This code demonstrates the Template design pattern. Let's break down the classes and functions:

**AbstractClass.php**:

- `AbstractClass`: This is the base class that provides a framework or a blueprint for its subclasses.
  - `templateMethod()`: This is the main method which dictates the sequence of methods that need to be executed. This is a final method, so it can't be overridden by subclasses.
  - `baseOperation1()`, `baseOperation2()`, and `baseOperation3()`: These methods provide a default implementation and are not abstract. Hence, they provide the same implementation for all subclasses unless they are overridden.
  - `requiredOperations1()` and `requiredOperation2()`: These methods are abstract, meaning the subclasses MUST provide an implementation for them.
  - `hook1()` and `hook2()`: These are hooks that can optionally be overridden by subclasses to provide some customized behavior. By default, they do nothing.

```php
abstract class AbstractClass
{
    final public function templateMethod(): void
    {
        $this->baseOperation1();
        $this->requiredOperations1();
        $this->baseOperation2();
        $this->hook1();
        $this->requiredOperation2();
        $this->baseOperation3();
        $this->hook2();
    }

    protected function baseOperation1(): void
    {
        echo "AbstractClass says: I am doing the bulk of the work<br/>";
    }

    protected function baseOperation2(): void
    {
        echo "AbstractClass says: But I let subclasses override some operations<br/>";
    }

    protected function baseOperation3(): void
    {
        echo "AbstractClass says: But I am doing the bulk of the work anyway<br/>";
    }

    abstract protected function requiredOperations1(): void;

    abstract protected function requiredOperation2(): void;

    protected function hook1(): void { }

    protected function hook2(): void { }
}
```

**Class1.php**:

- `Class1`: This is the first concrete implementation of `AbstractClass`.
  - `requiredOperations1()` and `requiredOperation2()`: This class provides the required implementations for these two abstract methods.

Note: There's an oversight in the code, the name of the class is `Class1` but the echo statements refer to it as `ConcreteClass1`.

```php
class Class1 extends AbstractClass
{
    protected function requiredOperations1(): void
    {
        echo "ConcreteClass1 says: Implemented Operation1<br/>";
    }

    protected function requiredOperation2(): void
    {
        echo "ConcreteClass1 says: Implemented Operation2<br/>";
    }
}
```
**Class2.php**:

- `Class1`: There's an error in the naming here. It should be `Class2` instead of `Class1`. This is the second concrete implementation of `AbstractClass`.
  - `requiredOperations1()` and `requiredOperation2()`: This class provides the required implementations for these two abstract methods.
  - `hook1()`: This method overrides the default hook1 method in `AbstractClass` to provide a customized behavior.

```php
class Class1 extends AbstractClass
{
    protected function requiredOperations1(): void
    {
        echo "ConcreteClass2 says: Implemented Operation1<br/>";
    }

    protected function requiredOperation2(): void
    {
        echo "ConcreteClass2 says: Implemented Operation2<br/>";
    }

    protected function hook1(): void
    {
        echo "ConcreteClass2 says: Overridden Hook1<br/>";
    }
}
```

**index.php**:

- This is the main file that brings all the classes together and demonstrates the Template design pattern.
  - `clientCode()`: This function accepts any subclass of `AbstractClass` and calls its `templateMethod()`. It illustrates that the same client code can work with different concrete implementations of an algorithm.
  - The two calls to `clientCode()` demonstrate how the same client code works with two different subclasses, `Class1` and `Class2`.

```php
include_once ('AbstractClass.php');
include_once('Class1.php');
include_once('Class2.php');

function clientCode(AbstractClass $class)
{
    // ...
    $class->templateMethod();
    // ...
}

echo "Same client code can work with different subclasses:<br/>";
clientCode(new Class1);
echo "\n";

echo "Same client code can work with different subclasses:<br/>";
clientCode(new Class2);

```

**Run in The Browser**:

The provided output shows the sequence of method calls that take place when the client code interacts with the two concrete subclasses (`Class1` and `Class2`). 

For `Class1`, it follows the default behavior of `AbstractClass` while providing its own implementations for the required methods. For `Class2`, in addition to providing its own implementations for the required methods, it also overrides `hook1()` to demonstrate a different behavior.

```run
Same client code can work with different subclasses:
AbstractClass says: I am doing the bulk of the work
ConcreteClass1 says: Implemented Operation1
AbstractClass says: But I let subclasses override some operations
ConcreteClass1 says: Implemented Operation2
AbstractClass says: But I am doing the bulk of the work anyway
Same client code can work with different subclasses:
AbstractClass says: I am doing the bulk of the work
ConcreteClass2 says: Implemented Operation1
AbstractClass says: But I let subclasses override some operations
ConcreteClass2 says: Overridden Hook1
ConcreteClass2 says: Implemented Operation2
AbstractClass says: But I am doing the bulk of the work anyway
```
In conclusion, the Template design pattern allows you to define the skeleton of an algorithm in a base class and let subclasses override specific steps of the algorithm without changing its overall structure.
