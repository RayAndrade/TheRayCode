[up](../README.md)

The Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.

The object that has some interesting state is often called subject, but since it’s also going to notify other objects about the changes to its state, we’ll call it publisher. 
All other objects that want to track changes to the publisher’s state are called subscribers.

The UserRepository represents a Subject. Various objects are interested in tracking its internal state, whether it's adding a new user or removing one.

PHP has a couple of built-in interfaces related to the Observer pattern.
The Subject owns some important state and notifies observers when the state changes.
In real life, the list of subscribers can be stored more comprehensively (categorized by event type, etc.
The Subject owns some important state and notifies observers when the state changes.
For the sake of simplicity, the Subject's state, essential to all subscribers, is stored in this variable.
The subscription management methods the also Trigger an update in each subscriber.

Usually, the subscription logic is only a fraction of what a Subject can really do. Subjects commonly hold some important business logic, that triggers a notification method whenever something important is about to happen (or after it).
```php
class Subject implements \SplSubject
{
    public $state;
    private $observers;
    public function __construct()
    {
        $this->observers = new \SplObjectStorage;
    }

    public function attach(SplObserver $observer): void
    {
        echo "Subject: Attached an observer.<br/>";
        $this->observers->attach($observer);
    }
    public function detach(SplObserver $observer): void
    {
        $this->observers->detach($observer);
        echo "Subject: Detached an observer.<br/>";
    }
    public function notify(): void
    {
        echo "Subject: Notifying observers...<br/>";
        foreach ($this->observers as $observer) {
            $observer->update($this);
        }
    }
    public function someBusinessLogic(): void
    {
        echo "\nSubject: I'm doing something important.<br/>";
        $this->state = rand(0, 10);

        echo "Subject: My state has just changed to: {$this->state}<br/>";
        $this->notify();
    }
}
```

Concrete Observers react to the updates issued by the Subject they had been attached to.
```php
class ConcreteObserverA implements SplObserver
{
    public function update(\SplSubject $subject): void
    {
        if ($subject->state < 3) {
            echo "ConcreteObserverA: Reacted to the event.<br/>";
        }
    }
}
```

![Observer](/UMLs/images/Observer/Observer-4.svg)


Let's also create another concrete observer we call **ConcreteObserverB**.
```php
class ConcreteObserverB implements SplObserver
{
    public function update(\SplSubject $subject): void
    {
        if ($subject->state == 0 || $subject->state >= 2) {
            echo "ConcreteObserverB: Reacted to the event.<br/>";
        }
    }
}
```

Now let put this all together in an index.php file and we have.

```php
include_once ('Subject.php');
include_once ('ConcreteObserverA.php');
include_once ('ConcreteObserverB.php');
$subject = new Subject;

$o1 = new ConcreteObserverA;
$subject->attach($o1);

$o2 = new ConcreteObserverB;
$subject->attach($o2);

$subject->someBusinessLogic();
$subject->someBusinessLogic();

$subject->detach($o2);

$subject->someBusinessLogic();
```
Now whe view our projext through a browser we have

```
Subject: Attached an observer.
Subject: Attached an observer.
Subject: I'm doing something important.
Subject: My state has just changed to: 4
Subject: Notifying observers...
ConcreteObserverB: Reacted to the event.
Subject: I'm doing something important.
Subject: My state has just changed to: 3
Subject: Notifying observers...
ConcreteObserverB: Reacted to the event.
Subject: Detached an observer.
Subject: I'm doing something important.
Subject: My state has just changed to: 1
Subject: Notifying observers...
ConcreteObserverA: Reacted to the event.
```

[Wikipedia](https://en.wikipedia.org/wiki/Observer_pattern)

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/TheRayCode/)

[The Ray Code](https://www.TheRayCode.org)

[Ray Andrade](https://www.RayAndrade.com)
