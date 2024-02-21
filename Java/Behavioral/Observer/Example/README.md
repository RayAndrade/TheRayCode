[up](../README.md)  [show](./Show/script/page01.md)

Certainly! I can provide you with a Java code example of the Observer design pattern. In this pattern, there are mainly four classes: `Subject`, `ConcreteSubject`, `Observer`, and `ConcreteObserver`. Each class serves a specific role in implementing the pattern.

Here's an example of how you can structure and implement the Observer design pattern in Java:

**1. Subject.java**:
```java
import java.util.ArrayList;
import java.util.List;

public interface Subject {
    void addObserver(Observer observer);
    void removeObserver(Observer observer);
    void notifyObservers();
}
```

The `Subject` interface defines methods that allow objects to register as observers, remove themselves as observers, and notify all observers when a change occurs.

**2. ConcreteSubject.java**:
```java
import java.util.ArrayList;
import java.util.List;

public class ConcreteSubject implements Subject {
    private List<Observer> observers = new ArrayList<>();
    private int state;

    public int getState() {
        return state;
    }

    public void setState(int state) {
        this.state = state;
        notifyObservers();
    }

    @Override
    public void addObserver(Observer observer) {
        observers.add(observer);
    }

    @Override
    public void removeObserver(Observer observer) {
        observers.remove(observer);
    }

    @Override
    public void notifyObservers() {
        for (Observer observer : observers) {
            observer.update();
        }
    }
}
```

`ConcreteSubject` is a class that implements the `Subject` interface. It maintains a list of observers and notifies them when its state changes.

**3. Observer.java**:
```java
public interface Observer {
    void update();
}
```

The `Observer` interface declares an `update` method that concrete observers will implement to respond to changes in the subject's state.

**4. ConcreteObserver.java**:
```java
public class ConcreteObserver implements Observer {
    private String name;
    private ConcreteSubject subject;

    public ConcreteObserver(String name, ConcreteSubject subject) {
        this.name = name;
        this.subject = subject;
        subject.addObserver(this);
    }

    @Override
    public void update() {
        int newState = subject.getState();
        System.out.println(name + " received an update: State is now " + newState);
    }
}
```

`ConcreteObserver` is a class that implements the `Observer` interface. It registers itself with a `ConcreteSubject` during construction and responds to updates by printing a message.

**5. Main.java**:
```java
public class Main {
    public static void main(String[] args) {
        ConcreteSubject subject = new ConcreteSubject();
        ConcreteObserver observer1 = new ConcreteObserver("Observer 1", subject);
        ConcreteObserver observer2 = new ConcreteObserver("Observer 2", subject);

        subject.setState(10);
        subject.setState(20);
    }
}
```

In the `Main` class, we create a `ConcreteSubject` and two `ConcreteObserver` instances. We then change the subject's state twice, which triggers notifications to the observers.

**Order to create classes:**
1. `Subject` interface
2. `ConcreteSubject` class
3. `Observer` interface
4. `ConcreteObserver` class
5. `Main` class

When you run the code, you should see the following output:
```
Observer 1 received an update: State is now 10
Observer 2 received an update: State is now 10
Observer 1 received an update: State is now 20
Observer 2 received an update: State is now 20
```

This output demonstrates that both observers are notified and updated when the subject's state changes.
