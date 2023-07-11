[home](./page01.md)

[back](./page01.md)


Create an **abstract** class to represent the handler

**AnimalHandler** (abstract class): 

This abstract class is the foundation of the "Chain of Responsibility" pattern.

```
AnimalHandler
```

We create an abstract class called **AnimalHandler** to represent the handlers in the chain. 
It has a reference to the next handler in the chain (successor) and an abstract method handleProblem() that each concrete handler will implement.

```
abstract
```

It defines the common interface and behavior that all handlers in the chain should adhere to.

The handleProblem() method is declared as abstract, ensuring that concrete handlers must implement it according to their specific logic.

add code:
```
protected AnimalHandler successor; // Reference to the next handler in the chain

public void setSuccessor(AnimalHandler successor) {
this.successor = successor; 
}
```

and
```
public abstract void handleProblem(ProblemType problemType);
```


[page 3](./page03.md)
