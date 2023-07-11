[home](./page01.md)

[back](./page05.md)


Create the demo class with the main method

**Demo** (class with main method): 

The **Demo** class serves as an entry point to run and test our "Chain of Responsibility" implementation.

It creates an instance of each handler, establishes the chain of responsibility by setting the successors, and then simulates different problems being handled by the first handler in the chain.

The purpose of this class is to showcase the behavior and interaction of the handlers, demonstrating how the chain passes the problems until an appropriate handler is found.

```
    // Let's create the chain of responsibility

AnimalHandler monkey = new MonkeyHandler();
AnimalHandler elephant = new ElephantHandler();
AnimalHandler penguin = new PenguinHandler();

monkey.setSuccessor(elephant);
elephant.setSuccessor(penguin);

    // Let's simulate some problems
monkey.handleProblem(ProblemType.HUNGER);
monkey.handleProblem(ProblemType.SLEEPINESS);
monkey.handleProblem(ProblemType.MISCHIEF);
monkey.handleProblem(ProblemType.HUNGER);
```

Overall, each class in this demo serves a specific purpose within the "Chain of Responsibility" pattern, allowing for flexible problem handling and easy extensibility.




[page 7](./page07.md)
