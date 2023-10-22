[up](../README.md)

When teaching the Observer design pattern in PHP, it's important to illustrate how this pattern allows an object, known as the "subject", to maintain a list of its dependents, called "observers", and notify them of any state changes, usually by calling one of their methods. It's commonly used to implement distributed event handling systems.

Let's create a simple application where we have a `User` class, and whenever the user changes their email, various observer classes are notified. We'll have an `EmailChangeLogger` class to log the change and a `EmailChangeNotifier` class to notify the user about this change.

The order of creating the classes could be as follows:

1. `Subject.php`: This is the interface for the subject which maintains the state of the object and notifies observers of any changes.
2. `Observer.php`: This is the interface that all observers must implement in order to receive updates from the subject.
3. `User.php`: The concrete subject whose state changes are of interest and should be observed.
4. `EmailChangeLogger.php` and `EmailChangeNotifier.php`: These are the concrete observers which take action when the state of the `User` subject changes.
5. `index.php`: This is where we put everything together and demonstrate the Observer pattern in action.

Let's create the files:

**Subject.php:**

```php
<?php
interface Subject
{
    public function attach(Observer $observer): void;
    public function detach(Observer $observer): void;
    public function notify(): void;
}
?>
```

This file defines the `Subject` interface with methods for attaching, detaching, and notifying observers.

**Observer.php:**

```php
<?php
interface Observer
{
    public function update(Subject $subject): void;
}
?>
```

The `Observer` interface only has a single method `update()`, which observers will implement to receive updates from the subject.

**User.php:**

```php
<?php
require_once 'Subject.php';
require_once 'Observer.php';

class User implements Subject
{
    private string $email;
    private array $observers = [];

    public function __construct(string $email)
    {
        $this->email = $email;
    }

    public function attach(Observer $observer): void
    {
        $this->observers[] = $observer;
    }

    public function detach(Observer $observer): void
    {
        foreach ($this->observers as $key => $obs) {
            if ($obs === $observer) {
                unset($this->observers[$key]);
                break;
            }
        }
    }

    public function notify(): void
    {
        foreach ($this->observers as $observer) {
            $observer->update($this);
        }
    }

    public function changeEmail(string $email): void
    {
        $this->email = $email;
        $this->notify();
    }

    public function getEmail(): string
    {
        return $this->email;
    }
}
?>
```

The `User` class implements the `Subject` interface. It maintains a list of observers and has a method `changeEmail()` that updates the user's email and notifies the observers of this change.

**EmailChangeLogger.php:**

```php
<?php
require_once 'Observer.php';
require_once 'User.php';

class EmailChangeLogger implements Observer
{
    public function update(Subject $subject): void
    {
        if ($subject instanceof User) {
            echo "EmailChangeLogger: The user's email has been changed to: " . $subject->getEmail() . "<br>";
        }
    }
}
?>
```

The `EmailChangeLogger` class implements the `Observer` interface and logs the new email to the standard output.

**EmailChangeNotifier.php:**

```php
<?php
require_once 'Observer.php';
require_once 'User.php';

class EmailChangeNotifier implements Observer
{
    public function update(Subject $subject): void
    {
        if ($subject instanceof User) {
            // In a real application, you might send an email here. For demo purposes, we'll just print a message.
            echo "EmailChangeNotifier: An email has been sent to the user notifying them of their email change to: " . $subject->getEmail() . "<br>";
        }
    }
}
?>
```

The `EmailChangeNotifier` class also implements the `Observer` interface. It simulates sending an email notification to the user about the email change.

**index.php:**

```php
<?php
require_once 'User.php';
require_once 'EmailChangeLogger.php';
require_once 'EmailChangeNotifier.php';

$user = new User("old.email@example.com");

$emailLogger = new EmailChangeLogger();
$emailNotifier = new EmailChangeNotifier();

$user->attach($emailLogger);
$user->attach($emailNotifier);

$user->changeEmail("new.email@example.com");
?>
```

In the `index.php`, we first create a `User` object with an initial email. Then, we create instances of `EmailChangeLogger` and `EmailChangeNotifier`, and we register them as observers of the user by calling `$user->attach()`. After that, we change the user's email by calling `$user->changeEmail()`, which triggers the observers.

When you run `index.php` in your browser, you should see:

```
EmailChangeLogger: The user's email has been changed to: new.email@example.com
EmailChangeNotifier: An email has been sent to the user notifying them of their email change to: new.email@example.com
```

This demonstrates the Observer pattern in action. The `User` object doesn't need to know what actions are taken when its email changes; it just notifies the observers that a change occurred. This decouples the classes and provides a flexible design where you can easily add more observers that perform different actions on an email change.
