[home](./page01.md)

[back](./page04.md)

**PenguinHandler**

```
PenguinHandler
```

```
extends AnimalHandler
```

implment methods

```
if (problemType == ProblemType.MISCHIEF) {
  System.out.println("Penguin: I'll bring you some snowballs to play with!");
} else {
  System.out.println("Penguin: This problem is beyond my expertise. Let's pass it on.");
  if (successor != null) {
    successor.handleProblem(problemType);
  }
}
```

[page 6](./page06.md)
