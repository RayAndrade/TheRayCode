[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Next create class
```
ConcreteSubject
```
it 
```
 implements Subject
```
We ad an **List** viable
```
private List<Observer> observers = new ArrayList<>();
```
So we have to
```
import java.util.ArrayList;
import java.util.List;
```
We will need a int to track our state
```
private int state;
```
to **getState**
```
public int getState() {
    return state;
}
```
to **setState**
```
public void setState(int state) {
    this.state = state;
    notifyObservers();
}
```
for the overrides
**addObserver**
```
observers.add(observer);
```
**removeObserver**
```
observers.remove(observer);
```
for **notifyObservers** we loop thru each
```
for (Observer observer : observers) {
    observer.update();
}
```



[page 5](./page05.md)
