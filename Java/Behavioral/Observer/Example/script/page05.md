[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Create class
```
ConcreteObserver
```
which 
```
 implements Observer
```

we add the code to the top
```
private String name;
private ConcreteSubject subject;

public ConcreteObserver(String name, ConcreteSubject subject) {
    this.name = name;
    this.subject = subject;
    subject.addObserver(this);
}
```
for **update**
```
int newState = subject.getState();
System.out.println(name + " received an update: State is now " + newState);
```


[page 6](./page06.md)
