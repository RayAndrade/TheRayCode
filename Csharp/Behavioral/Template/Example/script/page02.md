[home](./page01.md) | [back](./page01.md) [next](./page03.md)


<p>Some Markdown text with <span style="color:blue">some <em>blue</em> text</span>.</p>


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
