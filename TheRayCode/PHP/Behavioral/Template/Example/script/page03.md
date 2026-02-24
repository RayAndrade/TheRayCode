[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create class
```
AbstractClass
```

and make it **abstract**
```
abstract
```
add code: for **templateMethod**
```
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
```
for the **baseOperation1**
```
protected function baseOperation1(): void
{
    echo "AbstractClass says: I am doing the bulk of the work<br/>";
}
```
templateMethod(): This is the main method which dictates the sequence of methods that need to be executed. 

This is a final method, so it can't be overridden by subclasses.

baseOperation1(), baseOperation2(), and baseOperation3(): These methods provide a default implementation and are not abstract. 

Hence, they provide the same implementation for all subclasses unless they are overridden.
**requiredOperations1() and requiredOperation2()**: 

These methods are abstract, meaning the subclasses MUST provide an implementation for them.
**hook1() and hook2()**: These are hooks that can optionally be overridden by subclasses to provide some customized behavior. By default, they do nothing.


for the **baseOperation2 and baseOperation3**
```
protected function baseOperation2(): void
{
    echo "AbstractClass says: But I let subclasses override some operations<br/>";
}

protected function baseOperation3(): void
{
    echo "AbstractClass says: But I am doing the bulk of the work anyway<br/>";
}
```

make the funcions **abstract protected**

```
abstract protected function requiredOperations1(): void;

abstract protected function requiredOperation2(): void;
```

let's add the **hooks**

```
protected function hook1(): void { }

protected function hook2(): void { }
```










[page 4](./page04.md)
