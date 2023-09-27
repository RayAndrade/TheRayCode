[up](../README.md)

The code you provided demonstrates the **Mediator** design pattern. The Mediator pattern is a behavioral pattern that provides a unified interface for a set of interfaces in a subsystem, thereby promoting loose coupling by preventing objects from referring to each other explicitly.

Let's break down the purpose and function of each class and method:

1. **User.php**

    - **`User` class:**
        - Represents a user who can send messages to the chatroom.
        
    - **Properties:**
        - `name` (protected): It's the name of the user.
        - `chatMediator` (protected): It's an instance of `ChatRoomMediator` interface, which provides a way for the user to communicate (send messages) with the chatroom.
        
    - **Methods:**
        - `__construct()`: Constructor function that initializes the `User` with a name and the associated mediator (chatroom).
        - `getName()`: Getter function to get the name of the user.
        - `send()`: Allows the user to send a message. The actual showing of the message is deferred to the mediator (chatroom), which is achieved by calling the `showMessage` method of the mediator.

```php
class User
{
    protected $name;
    protected $chatMediator;

    public function __construct(string $name, ChatRoomMediator $mediator) {
        $this->name = $name;
        $this->chatMediator = $mediator;
    }

    public function getName(): string {
        return $this->name;
    }

    public function send(string $message): void {
        $this->chatMediator->showMessage($this, $message);
    }
}
```

2. **ChatRoomMediator.php**

    - **`ChatRoomMediator` interface:**
        - Defines a contract (interface) for how messages should be shown by any mediator.
        
    - **Methods:**
        - `showMessage()`: An abstract method that any class implementing the `ChatRoomMediator` interface must provide an implementation for. It determines how a message should be displayed.


```php
interface ChatRoomMediator
{
    public function showMessage(User $user, string $message): void;
}
```



3. **ChatRoom.php**

    - **`ChatRoom` class:**
        - Represents a chatroom. Implements the `ChatRoomMediator` interface.
        - Acts as a mediator between users when they want to send messages.
        
    - **Methods:**
        - `showMessage()`: Implementation of the `showMessage` method from the `ChatRoomMediator` interface. It displays a message with a timestamp and the sender's name.

```php
require_once 'ChatRoomMediator.php';
require_once 'User.php';

class ChatRoom implements ChatRoomMediator
{

    public function showMessage(User $user, string $message): void
    {
        $time = date('H:i');
        $sender = $user->getName();

        echo "$time [$sender]: $message<br>";
    }
}
```

4. **index.php**

    - This is the main entry point to see the mediator pattern in action.
    
    - **Steps:**
        - Requires necessary class files.
        - Creates a new chatroom (which acts as a mediator).
        - Creates two users (John and Jane) who will use the chatroom to communicate.
        - Users (John and Jane) send messages to each other, but they don't communicate directly; instead, they use the chatroom (mediator) to relay messages.

**index.php**

```php
require_once 'User.php';
require_once 'ChatRoom.php';

// Create a chatroom (mediator)
$chatroom = new ChatRoom();

// Create users
$john = new User("John", $chatroom);
$jane = new User("Jane", $chatroom);

// Users send messages
$john->send("Hello Jane!");
$jane->send("Hey John, how are you?");

**Overall Flow:**

When the `send` method of the `User` class is invoked, it doesn't send the message directly to the other user. Instead, it uses the mediator (`ChatRoom` in this case) to display the message. The mediator is responsible for determining how the message should be presented. This ensures that the individual users are decoupled from one another and only interact with the chatroom, making the system more modular and easier to maintain.


