[up](../REDME.md)

Alright! Let's implement the Observer pattern in PHP. The Observer pattern is a behavioral design pattern where an object, called the subject, maintains a list of its dependents, called observers, and notifies them of any state changes.

**Order to Create Classes**:
1. `Observer.php` - The observer interface.
2. `Subject.php` - The subject interface.
3. `ConcreteSubject.php` - The concrete implementation of the subject.
4. `ConcreteObserver.php` - The concrete implementation of the observer.
5. `index.php` - Demonstrating the pattern in action.

---

**1. Observer.php**:
This is the observer interface that all concrete observers need to implement.
```php
<?php

interface Observer {
    public function update($message);
}

?>
```

---

**2. Subject.php**:
This is the subject interface that all concrete subjects need to implement.
```php
<?php

interface Subject {
    public function attach(Observer $observer);
    public function detach(Observer $observer);
    public function notify();
}

?>
```

---

**3. ConcreteSubject.php**:
A concrete implementation of the `Subject` interface.
```php
<?php

include 'Subject.php';

class ConcreteSubject implements Subject {
    private $observers = [];
    private $state;

    public function attach(Observer $observer) {
        $this->observers[] = $observer;
    }

    public function detach(Observer $observer) {
        foreach ($this->observers as $key => $obs) {
            if ($obs === $observer) {
                unset($this->observers[$key]);
            }
        }
    }

    public function notify() {
        foreach ($this->observers as $observer) {
            $observer->update($this->state);
        }
    }

    public function setState($state) {
        $this->state = $state;
        $this->notify();
    }
}

?>
```

---

**4. ConcreteObserver.php**:
A concrete implementation of the `Observer` interface.
```php
<?php

include 'Observer.php';

class ConcreteObserver implements Observer {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function update($message) {
        echo "Observer {$this->name} received message: {$message}<br>";
    }
}

?>
```

---

**5. index.php**:
Demonstrating the Observer pattern in action.
```php
<?php

include 'ConcreteSubject.php';
include 'ConcreteObserver.php';

$subject = new ConcreteSubject();

// Create observers
$observer1 = new ConcreteObserver('Observer 1');
$observer2 = new ConcreteObserver('Observer 2');
$observer3 = new ConcreteObserver('Observer 3');

// Attach observers to the subject
$subject->attach($observer1);
$subject->attach($observer2);
$subject->attach($observer3);

// Change state and notify observers
$subject->setState('New State Set!');

?>
```

---

**In the Browser**:
When you visit `index.php` in your browser, you should see:
```
Observer Observer 1 received message: New State Set!
Observer Observer 2 received message: New State Set!
Observer Observer 3 received message: New State Set!
```

This indicates that all observers received a notification of the state change in the `ConcreteSubject`.

**Note**: Always ensure you properly handle includes and paths based on your directory structure. Using `include_once` might be safer in some cases if files might be included multiple times indirectly.



[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)





