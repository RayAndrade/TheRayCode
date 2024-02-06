[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

We create a **class**
```
ConcreteObserver
```
which
```
 implements Observer
```
At the top
```
private String name;
private ConcreteSubject subject;
```
We add a **ConcreteObserver** method
```
public ConcreteObserver(String name, ConcreteSubject subject) {
    this.name = name;
    this.subject = subject;
    subject.addObserver(this);
}
```
for the method **update** we override with
```
int newState = subject.getState();
System.out.println(name + " received an update: State is now " + newState);
```
ConcreteObserver is a class that implements the Observer interface. It registers itself with a ConcreteSubject during construction and responds to updates by printing a message.



[page 5](./page05.md)
