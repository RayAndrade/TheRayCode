[home](./page01.md)

[back](./page03.md)


**ElephantHandler**

```
ElephantHandler
```

```
extends AnimalHandler
```

implment methods

```
if (problemType == ProblemType.SLEEPINESS) {
  System.out.println("Elephant: I'll give you a trunk-sized pillow!");
} else {
  System.out.println("Elephant: I'm not the right animal to handle this. Let's find someone else.");
  if (successor != null) {
    successor.handleProblem(problemType);
  }
}
```

[page 5](./page05.md)
