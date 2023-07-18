[home](./page01.md)

Command is a behavioral design pattern that turns a request in a stand-alone object that contains the information needed for the request. 
This transformation lets you pass the requests as a method argument. 
The request cant be delaied, queued as a request’s execution. 
The request can also support undoable operations.

This example will illustrate the structure of the Command design pattern and will focuses on the following questions:

* What classes does it consist of?
 
* What roles do these classes play?

* In what way the elements of the pattern are related?

The Command interface declares a method for executing the command.

interface
```
Command
```

add code

```
public function execute(): void;
```


[page 2](./page02.md)
