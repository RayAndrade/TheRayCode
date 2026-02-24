[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

This code demonstrates the Template design pattern. 

Let's break down the classes and functions:


    **AbstractClass**: This is the base class that provides a framework or a blueprint for its subclasses.
        templateMethod(): This is the main method which dictates the sequence of methods that need to be executed. This is a final method, so it can't be overridden by subclasses.
        baseOperation1(), baseOperation2(), and baseOperation3(): These methods provide a default implementation and are not abstract. Hence, they provide the same implementation for all subclasses unless they are overridden.
        requiredOperations1() and requiredOperation2(): These methods are abstract, meaning the subclasses MUST provide an implementation for them.
        hook1() and hook2(): These are hooks that can optionally be overridden by subclasses to provide some customized behavior. By default, they do nothing.



[page 3](./page03.md)
