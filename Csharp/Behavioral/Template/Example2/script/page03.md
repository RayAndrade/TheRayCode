[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **AbstractClass** class
```
AbstractClass
```
The 'TemplateMethod' is the skeleton of an algorithm.

It is made final to prevent its structure from being **altered**.

```
public void TemplateMethod()
{
    BaseOperation();
    RequiredOperations1();
    RequiredOperation2();
    Hook1();
}
```
A common operation used by the template method.
```
    // A common operation used by the template method.
void BaseOperation()
{
    Console.WriteLine("BaseOperation: Common operation for all subclasses");
}
```
These operations have to be implemented in subclasses.
```
protected abstract void RequiredOperations1();
protected abstract void RequiredOperation2();
```

Hooks provide additional extension points in some parts of the algorithm.
```
    // Hooks provide additional extension points in some parts of the algorithm.
protected virtual void Hook1() { }
```


[page 4](./page04.md)
