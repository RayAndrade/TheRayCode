[home](./page01.md)

[back](./page02.md)

Implement concrete handler classes **MonkeyHandler**, **ElephantHandler**, **PenguinHandler** (concrete handler classes):

These classes represent individual handlers in the chain and are responsible for handling specific types of problems based on the ProblemType.

Each handler checks if it can handle the given problem type. If it can, it provides a funny solution specific to the animal.

If a handler cannot handle the problem, it passes the problem to the next handler in the chain by calling handleProblem() on the successor.

The concrete handler classes demonstrate the flexibility of the "Chain of Responsibility" pattern, as new handlers can be added easily without affecting the existing code.
    
**MonkeyHandler**

```
MonkeyHandler
```

```
extends AnimalHandler
```

implment methods

```
if (problemType == ProblemType.HUNGER) {
  System.out.println("Monkey: I'll peel some bananas for you!");
} else {
  System.out.println("Monkey: I can't help with this problem. Let's ask someone else.");
  if (successor != null) {
    successor.handleProblem(problemType);
  }
}
```  

[page 4](./page04.md)
