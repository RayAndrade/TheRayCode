[up](../README.md)

Sure, I can provide you with a Java code example of the Observer design pattern using the scenario you mentioned, where the observer is a sailor and the subject is a pretty woman. I will also organize the classes into separate files, as requested.

**Observer.java**:
```java
import java.util.ArrayList;
import java.util.List;

public interface Observer {
    void update(String message);
}
```

In this interface, `Observer` defines the `update` method that will be implemented by concrete observers. In your scenario, the sailors will implement this interface.

**Subject.java**:
```java
import java.util.ArrayList;
import java.util.List;

public interface Subject {
    void addObserver(Observer observer);
    void removeObserver(Observer observer);
    void notifyObservers(String message);
}
```

`Subject` interface defines methods for adding, removing, and notifying observers. In your scenario, the pretty woman will implement this interface.

**PrettyWoman.java**:
```java
import java.util.ArrayList;
import java.util.List;

public class PrettyWoman implements Subject {
    private List<Observer> sailors = new ArrayList<>();
    private String message;

    @Override
    public void addObserver(Observer observer) {
        sailors.add(observer);
    }

    @Override
    public void removeObserver(Observer observer) {
        sailors.remove(observer);
    }

    @Override
    public void notifyObservers(String message) {
        for (Observer sailor : sailors) {
            sailor.update(message);
        }
    }

    public void flirt() {
        message = "The pretty woman smiles at the sailors.";
        notifyObservers(message);
    }

    public void reject() {
        message = "The pretty woman ignores the sailors.";
        notifyObservers(message);
    }
}
```

`PrettyWoman` is a concrete subject that implements the `Subject` interface. It maintains a list of sailors (observers) and can send them messages when appropriate.

**Sailor.java**:
```java
public class Sailor implements Observer {
    private String name;

    public Sailor(String name) {
        this.name = name;
    }

    @Override
    public void update(String message) {
        System.out.println(name + " received a message: " + message);
    }
}
```

`Sailor` is a concrete observer that implements the `Observer` interface. Each sailor has a name and can receive messages from the pretty woman.

**Main.java**:
```java
public class Main {
    public static void main(String[] args) {
        PrettyWoman prettyWoman = new PrettyWoman();
        Sailor sailor1 = new Sailor("Sailor 1");
        Sailor sailor2 = new Sailor("Sailor 2");

        prettyWoman.addObserver(sailor1);
        prettyWoman.addObserver(sailor2);

        prettyWoman.flirt();
        prettyWoman.reject();
    }
}
```

**Order to create classes:**
1. `Observer` interface
2. `Subject` interface
3. `PrettyWoman` class
4. `Sailor` class
5. `Main` class

When you run the code, you will see the following output:

```
Sailor 1 received a message: The pretty woman smiles at the sailors.
Sailor 2 received a message: The pretty woman smiles at the sailors.
Sailor 1 received a message: The pretty woman ignores the sailors.
Sailor 2 received a message: The pretty woman ignores the sailors.
```

This output demonstrates how the sailors (observers) receive messages from the pretty woman (subject) based on her actions (flirt and reject).
