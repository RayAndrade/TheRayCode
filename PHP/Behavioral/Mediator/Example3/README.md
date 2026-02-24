[up](../README.md)

The Mediator pattern is used to reduce the complexity of communication between multiple objects or classes. This pattern provides a mediator class that handles all the communications between different classes and supports easy maintenance of the code by loose coupling.

In this example, we'll create a simple chat room (a common use case for the Mediator pattern), where users (participants) can send messages to each other via a central mediator (the chat room itself), without needing direct connections to one another.

The classes we'll create are:

1. `Mediator` (interface)
2. `ChatRoom` (concrete mediator)
3. `User` (colleague)

We'll start by creating the `Mediator` interface because both the concrete mediator and the colleagues depend on it. Then we'll create the `ChatRoom` as it's the concrete mediator, and finally, the `User` class which represents the individual colleagues.

File: `Mediator.php`
```php
<?php

interface Mediator {
    public function sendMessage(string $message, User $user): void;
    // The Mediator interface declares a method used for sending messages between components.
}
```

File: `ChatRoom.php`
```php
<?php

require_once 'Mediator.php';
require_once 'User.php';

class ChatRoom implements Mediator {
    /**
     * @var User[]
     */
    private array $users = [];

    public function addUser(User $user): void {
        $this->users[] = $user;
        // Adds a user to the chat room.
    }

    public function sendMessage(string $message, User $user): void {
        foreach ($this->users as $u) {
            // Message should not be sent back to the user who sent it, but to all other users (broadcast).
            if ($u !== $user) {
                $u->receive($message);
            }
        }
    }
}
```

File: `User.php`
```php
<?php

require_once 'Mediator.php';

class User {
    private string $name;
    private Mediator $chatRoom;

    public function __construct(string $name, Mediator $chatRoom) {
        $this->name = $name;
        $this->chatRoom = $chatRoom;
    }

    public function getName(): string {
        return $this->name;
        // Returns the name of the user.
    }

    public function send(string $message): void {
        echo $this->name . " sends message: " . $message . "<br/>";
        $this->chatRoom->sendMessage($message, $this);
        // Sends a message to the chat room, which then notifies all other users.
    }

    public function receive(string $message): void {
        echo $this->name . " received message: " . $message . "<br/>";
        // Method used by the chat room to deliver messages to this user.
    }
}
```

File: `index.php`
```php
<?php

require_once 'ChatRoom.php';
require_once 'User.php';

$chatroom = new ChatRoom();

$user1 = new User("Alice", $chatroom);
$user2 = new User("Bob", $chatroom);

$chatroom->addUser($user1);
$chatroom->addUser($user2);

$user1->send("Hello Bob!");
$user2->send("Hey Alice!");

// This will produce a web page that shows the users sending messages to each other via the chat room.
```

When you run `index.php` in your browser, you should see:

```
Alice sends message: Hello Bob!
Bob received message: Hello Bob!
Bob sends message: Hey Alice!
Alice received message: Hey Alice!
```

This output indicates the `ChatRoom` mediator is facilitating the conversation between `User` objects, allowing them to communicate without knowing about each other.
