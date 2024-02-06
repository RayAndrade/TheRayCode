[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Next create class
```
ConcreteSubject
```
and it will implement the interface we just created
```
 implements Subject
```
So we add
```
private List<Observer> observers = new ArrayList<>();
```
and we can import
```
import java.util.ArrayList;
import java.util.List;
```
and we add
```
private int state;
```

for **getState**
```
public int getState() {
    return state;
}
```

for **setState**
```
public void setState(int state) {
    this.state = state;
    notifyObservers();
}
```

**addObserver** Override
```
observers.add(observer);
```

**removeObserver** Override
```
observers.remove(observer);
```
for **notifyObservers** we go thru a **for loop**
```
for (Observer observer : observers) {
    observer.update();
}
```


[page 4](./page04.md)
