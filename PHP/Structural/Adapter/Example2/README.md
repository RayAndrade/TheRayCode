[up](../README.md)


### 1. Notification.php

This file defines an interface named `Notification`. It declares a method `send` which any class implementing this interface must define.

```php
interface Notification
{
    public function send(string $title, string $message);
}
```


```php
interface Notification
{
    public function send(string $title, string $message);
}
```
### 2. SlackApi.php

This file defines a class `SlackApi` that simulates interactions with the Slack API.

- `private $login;` & `private $apiKey;` - Private properties to store login details and API key.
  
- `__construct` - Constructor method which initializes the `$login` and `$apiKey` properties.
  
- `logIn` - Simulates the login process to Slack and displays a message indicating that the user has logged in.
  
- `sendMessage` - Simulates the process of sending a message to a Slack chat and displays a message indicating that the message has been posted.

```php
class SlackApi
{
    //... properties and methods ...
}
```

```php
class SlackApi
{
    private $login;
    private $apiKey;

    public function __construct(string $login, string $apiKey)
    {
        $this->login = $login;
        $this->apiKey = $apiKey;
    }

    public function logIn()
    {
        // Send authentication request to Slack web service.
        echo "Logged in to a slack account '{$this->login}'.\n";
    }

    public function sendMessage(string $chatId, string $message)
    {
        // Send message post request to Slack web service.
        echo "Posted following message into the '$chatId' chat: '$message'.\n";
    }
}
```

### 3. SlackNotification.php

This file defines a class `SlackNotification` that implements the `Notification` interface and acts as an adapter for the `SlackApi` class.

- `private $slack;` & `private $chatId;` - Private properties to store an instance of the `SlackApi` class and the chat ID respectively.
  
- `__construct` - Constructor method which initializes the `$slack` and `$chatId` properties.
  
- `send` - This is the main method. It first formats the message by adding a hash (#) before and after the title and stripping any HTML tags from the message. Then it logs in to the Slack account using the `logIn` method and sends the message using the `sendMessage` method.

```php
class SlackNotification implements Notification
{
    //... properties and methods ...
}
```

```php
class SlackNotification implements Notification
{
    private $slack;
    private $chatId;

    public function __construct(SlackApi $slack, string $chatId)
    {
        $this->slack = $slack;
        $this->chatId = $chatId;
    }

    public function send(string $title, string $message)
    {
        $slackMessage = "#" . $title . "# " . strip_tags($message);
        $this->slack->logIn();
        $this->slack->sendMessage($this->chatId, $slackMessage);
    }
}
```


### 4. index.php

This file is the entry point. It includes necessary files and provides a function named `clientCode` that simulates sending a notification.

- `clientCode` - A function that expects an instance of a class implementing the `Notification` interface as an argument and then uses the `send` method of that instance to send a notification.
  
- The function is then called with an instance of `EmailNotification` (which seems to be missing from the provided code), and it outputs a simulated message about sending an email notification.

```php
//... includes and function definition ...
clientCode($notification);
```


```php
require_once 'EmailNotification.php';
require_once 'Notification.php';
require_once 'SlackApi.php';
require_once 'SlackNotification.php';
function clientCode(Notification $notification)
{
    // ...

    echo $notification->send("Website is down!",
        "<strong style='color:red;font-size: 50px;'>Alert!</strong> " .
        "Our website is not responding. Call admins and bring it up!");

    // ...
}

echo "Client code is designed correctly and works with email notifications:\n";
$notification = new EmailNotification("developers@example.com");
clientCode($notification);
echo "\n\n";
```

### View in Browser

The output you see in the browser indicates the following steps:

1. The "Client code is designed correctly and works with email notifications:" message is just a statement indicating that the client code works with email notifications.

2. An email notification is simulated: "Sent email with title 'Website is down!' to 'developers@example.com' that says 'Alert! Our website is not responding. Call admins and bring it up!'." - This output likely comes from the `EmailNotification` class that wasn't provided in the prompt.

3. There's an indication that the same client code can work with other classes via the adapter: "The same client code can work with other classes via adapter:".

4. Then there's a simulation of the Slack notification using the `SlackNotification` adapter: "Logged in to a slack account 'example.com'. Posted following message into the 'Example.com Developers' chat: '#Website is down!# Alert! Our website is not responding. Call admins and bring it up!'."


```run
Client code is designed correctly and works with email notifications: Sent email with title 'Website is down!' to 'developers@example.com' that says 'Alert! Our website is not responding. Call admins and bring it up!'. The same client code can work with other classes via adapter: Logged in to a slack account 'example.com'. Posted following message into the 'Example.com Developers' chat: '#Website is down!# Alert! Our website is not responding. Call admins and bring it up!'. 
```

The Adapter Design Pattern is showcased here by how the same `clientCode` function can work with different notification systems (like email and Slack) without changing its implementation. The `SlackNotification` class serves as an adapter that makes the `SlackApi` class compatible with the `Notification` interface, allowing the client code to send notifications through Slack using the same method (`send`) that it uses for email notifications.




