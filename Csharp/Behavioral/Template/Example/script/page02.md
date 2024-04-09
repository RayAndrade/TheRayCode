[home](./page01.md) | [back](./page01.md) [next](./page03.md)
It's worth mentioning that you can add some colour in a README using a placeholder image service. For example if you wanted to provide a list of colours for reference:

- ![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) `#f03c15`
- ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) `#c5f015`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `#1589F0`
Produces:

#f03c15 color #f03c15
#c5f015 color #c5f015
#1589F0 color #1589F0



The Template Method pattern is a fundamental design pattern in object-oriented programming that defines the program skeleton of an algorithm in a method, deferring some steps to subclasses. 

It allows subclasses to redefine certain steps of an algorithm without changing the algorithm's structure.

Here’s a simple example to demonstrate the Template Method pattern in C#.

We start by creating class
```
AbstractClass
```
make it abstract

add:
```
public void TemplateMethod()
{
    BaseOperation();
    RequiredOperations();
    OptionalHook();
}
```
we will define **BaseOperation**, **RequiredOperations** and **OptionalHook** later

This will be common operation used by all subclasses.
```
protected void BaseOperation()
{
    Console.WriteLine("Base Operation: Common to all classes.");
}
```
step that must be implemented by subclasses.

```
protected abstract void RequiredOperations();
```
A hook operation with a default implementation. Subclasses may override this.
```
protected virtual void OptionalHook()
{
    // Default implementation
}
```


[page 3](./page03.md)
