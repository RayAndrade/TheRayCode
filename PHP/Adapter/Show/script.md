We first create an *interface* we call **Notification**.

```php
interface Notification
{
    public function send(string $title, string $message);
}
```

the **Notification** *interface* requires the **send** method.

Here's an example of the existing class that follows the Target interface.
 * The truth is that many real apps may not have this interface clearly defined.
 * If you're in that boat, your best bet would be to extend the Adapter from one
 * of your application's existing classes. If that's awkward (for instance,
 * SlackNotification doesn't feel like a subclass of EmailNotification), then
 * extracting an interface should be your first step.

Next we look at the **EmailNotification** class which will *implement* **Notification**.

```php
class EmailNotification implements Notification
{
    public function send(string $title, string $message): void
    {
        // TODO: Implement send() method.
    }
}
```

we add to the top:

```php
private $adminEmail;

public function __construct(string $adminEmail)
{
    $this->adminEmail = $adminEmail;
}
```

Next we create the **SlackApi** class

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

    public function logIn(): void
    {
        // Send authentication request to Slack web service.
        echo "Logged in to a slack account '{$this->login}'.\n";
    }

    public function sendMessage(string $chatId, string $message): void
    {
        // Send message post request to Slack web service.
        echo "Posted following message into the '$chatId' chat: '$message'.\n";
    }
}
```

The Adaptee is some useful class, incompatible with the Target interface. 
You can't just go in and change the code of the class to follow the Target interface, since the code might be provided by a 3rd-party library.


Next we create a class called **SlackNotification** which will *implement* **Notification**  ALSO..


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

    public function send(string $title, string $message): void
    {
        $slackMessage = "#" . $title . "# " . strip_tags($message);
        $this->slack->logIn();
        $this->slack->sendMessage($this->chatId, $slackMessage);
    }
}
```

An Adapter is not only capable of adapting interfaces, but it can also convert incoming data to the format required by the Adaptee.


We also need to include **Notification** at the top:
```php
include_once ('Notification.php');
```


So now lets go to the **index** and we add the includes we need..

```php
include_once ('Notification.php');
include_once ('EmailNotification.php');
include_once ('SlackApi.php');
include_once ('SlackNotification.php');
```

we create some client code. The client code can work with any class that follows the Target interface.

```php
function clientCode(Notification $notification)
{
    echo $notification->send("The Ray Code is <br/>",
        "<br/><strong style='color:red;font-size: 50px;'>AWESOME!!!</strong> " .
        "<br/>Tell your friends");
}
```

now some demo code:

```php

echo "The Ray Code is AWESOME!!! They need to know<br/>";
$notification = new EmailNotification("friends@TheRayCod.org");
clientCode($notification);

echo " The same client code can work with other classes via adapter";
$slackApi = new SlackApi("TheRayCode.com", "XXXXXXXX");
$notification = new SlackNotification($slackApi, "RayAndrade.org Developers");
clientCode($notification);
```

When you view this thru a browser we see>

```run
The Ray Code is AWESOME!!! They need to know
Sent email with title 'The Ray Code is
' to 'friends@TheRayCod.org' that says '
AWESOME!!!
Tell your friends'. The same client code can work with other classes via adapterLogged in to a slack account 'TheRayCode.com'.
Posted following message into the 'RayAndrade.org Developers' chat: '#The Ray Code is
# AWESOME!!! Tell your friends'.
```









































