# TheRayCode
## Command pattern php

Command is a behavioral design pattern that turns a request in a stand-alone object that contains the information needed for the request. 
This transformation lets you pass the requests as a method *argument*.
The request cant be delaied, queued as a request’s execution. 
The request can also support *undoable* operations.

This example will illustrate the structure of the Command design pattern and will focuses on the following questions:
<ul>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ul>


The Command interface declares a method for executing the command.
```php
interface Command
{
    public function execute(): void;
}
```
Some commands can be implement with simple operations on their own.
First, we will add a **Simple Command** that will implement the **Command** interface.

```php
class SimpleCommand implements Command
{
    private $payload;

    public function __construct(string $payload)
    {
        $this->payload = $payload;
    }

    public function execute(): void
    {
        echo "SimpleCommand: does the request  (" . $this->payload . ")<br/>";
    }
}
```
Let's create a **Complex Command**.
Now, some commands can delegate more complex operations to other objects. Those objects are called *receivers.*
Some *Context data* will be required for launching the receiver's methods.
Some Complex commands can accept one or more receiver objects along with any context data from the constructor.
The *Commands* can delegate to any method of a receiver.
```php
class ComplexCommand implements Command
{
    private $receiver;
    private $a;
    private $b;

    public function __construct(Receiver $receiver, string $a, string $b)
    {
        $this->receiver = $receiver;
        $this->a = $a;
        $this->b = $b;
    }

    public function execute(): void
    {
        echo "ComplexCommand: Complex stuff should be done by a receiver object.<br/>";
        $this->receiver->doSomething($this->a);
        $this->receiver->doSomethingElse($this->b);
    }
}
```
![Command](/UMLs/images/Command/Command-4.png)

The Receiver classes contain some important business logic. 
They know how to perform all kinds of operations, associated with carrying out a request. 
In fact, any class may serve as a Receiver.
```php
class Receiver
{
    public function doSomething(string $a): void
    {
        echo "Receiver: Working on (" . $a . ".)<br/>";
    }

    public function doSomethingElse(string $b): void
    {
        echo "Receiver: Also working on (" . $b . ".)<br/>";
    }
}
```
The Invoker is associated with one or several commands. 
It will send a request to the command.
The Invoker does'nt depend on a concrete command or a receiver classes. 
The Invoker passes a request to a receiver indirectly, by executing it's command.

At the top we place our includes:

```php
include_once ('Command.php');
include_once ('SimpleCommand.php');
include_once ('ComplexCommand.php');
include_once ('Receiver.php');
include_once ('Invoker.php');
```
The client code can parameterize the invoker with any of the commands.

```php
$invoker = new Invoker;
$invoker->setOnStart(new SimpleCommand("Say Hi!"));
$receiver = new Receiver;
$invoker->setOnFinish(new ComplexCommand($receiver, "Send email", "Save report"));
$invoker->doSomethingImportant();
```

When we when veiw our code through the browser we should get

```run
Invoker: Makes a request
SimpleCommand: does the request (Say Hi!)
Invoker: does the action...
Invoker: Makes another request
ComplexCommand: Complex stuff should be done by a receiver object.
Receiver: Working on (Send email.)
Receiver: Also working on (Save report.)
```
The Ray Code is AWESOME!!!
[Wikipedia](https://en.wikipedia.org/wiki/Command_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
