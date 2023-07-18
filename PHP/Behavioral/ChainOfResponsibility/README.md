

# [TheRayCode](../../README.md) is AWESOME!!! 

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)** |

**PHP Behavioral Patterns**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| **ChainOfResponsibility** | [**C++**](../../../CPP/Behavioral/ChainOfResponsibility/README.md) | [**C#**](../../../Csharp/Behavioral/ChainOfResponsibility/README.md) | [Java](../../../Java/Behavioral/ChainOfResponsibility/README.md) | [PHP](../../../PHP/Behavioral/ChainOfResponsibility/README.md) |

**PHP Chain Of Responsibility Design Pattern**

[Example 1](./COR1/README.md)

[Show](./Show/README.md)


As a PHP developer, understanding and utilizing the Behavioral pattern Chain of Responsibility can be beneficial for building flexible and extensible code. 
The Chain of Responsibility pattern allows you to decouple the sender of a request from its receivers, providing a chain of objects that can handle the request. 
Each receiver in the chain has the ability to handle the request or pass it on to the next receiver.

Here's how you can utilize the Chain of Responsibility pattern in PHP development:

**Identify the problem**: Determine a scenario where you have multiple objects that can handle a specific request, and the handler needs to be determined dynamically at runtime.

**Create an abstract handler**: Define an abstract class or interface that represents the base handler in the chain. 
This class should have a method to handle the request and a reference to the next handler in the chain.

**Implement concrete handlers**: Create concrete handler classes that extend or implement the abstract handler. 
Each concrete handler should implement the request handling logic and decide whether to process the request or pass it to the next handler in the chain.

**Establish the chain**: Create instances of the concrete handler classes and link them together to form the chain. 
Set the next handler for each handler in the chain.

**Handle the request**: Pass the request to the first handler in the chain. The chain will propagate the request through each handler until it is handled or the end of the chain is reached.

Here's a simple example to illustrate the usage of Chain of Responsibility in PHP:


```
<?php

abstract class Handler
{
    protected $nextHandler;

    public function setNext(Handler $handler)
    {
        $this->nextHandler = $handler;
    }

    public abstract function handleRequest($request);
}

class ConcreteHandler1 extends Handler
{
    public function handleRequest($request)
    {
        if ($request === 'A') {
            echo "ConcreteHandler1 handles request: $request\n";
        } else if ($this->nextHandler !== null) {
            $this->nextHandler->handleRequest($request);
        }
    }
}

class ConcreteHandler2 extends Handler
{
    public function handleRequest($request)
    {
        if ($request === 'B') {
            echo "ConcreteHandler2 handles request: $request\n";
        } else if ($this->nextHandler !== null) {
            $this->nextHandler->handleRequest($request);
        }
    }
}

// Usage example
$handler1 = new ConcreteHandler1();
$handler2 = new ConcreteHandler2();

$handler1->setNext($handler2);

$handler1->handleRequest('A'); // Output: ConcreteHandler1 handles request: A
$handler1->handleRequest('B'); // Output: ConcreteHandler2 handles request: B
$handler1->handleRequest('C'); // No output

?>
```

In this example, **ConcreteHandler1** and **ConcreteHandler2** represent the concrete handlers in the chain. 
They check if they can handle the request and pass it to the next handler if they can't. 
You can extend the chain by adding more concrete handlers and linking them together.

Understanding and implementing the Chain of Responsibility pattern can help you achieve loose coupling between components and enable easier maintenance and extension of your code.



[TheRayCode.ORG](https://www.TheRayCode.ORG)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/AndradeRay/)
