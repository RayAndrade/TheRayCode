[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

At the **index.php**

```
include 'ConcreteSubject.php';
include 'ConcreteObserver.php';
```

add code:
```
$subject = new ConcreteSubject();
```

// Create observers
```
$observer1 = new ConcreteObserver('Observer 1');
$observer2 = new ConcreteObserver('Observer 2');
$observer3 = new ConcreteObserver('Observer 3');
```

// Attach observers to the subject
```
$subject->attach($observer1);
$subject->attach($observer2);
$subject->attach($observer3);
```
// Change state and notify observers
```
$subject->setState('New State Set!');
```


[page 7](./page07.md)
