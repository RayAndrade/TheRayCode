**Notification.php**

```
namespace TheRayCode\Adapter;

interface Notification
{
    public function send(string $title, string $message);
}
```

**SlackApi.php**


```
namespace TheRayCode\Adapter;

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
**SlackNotification.php**

```
namespace TheRayCode\Adapter;

use TheRayCode\Adapter\Notification;

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

**EmailNotification.php**

```
namespace TheRayCode\Adapter;

use TheRayCode\Adapter\Notification;

class EmailNotification implements Notification
{

    private $adminEmail;

    public function __construct(string $adminEmail)
    {
        $this->adminEmail = $adminEmail;
    }
    public function send(string $title, string $message)
    {
        mail($this->adminEmail, $title, $message);
        echo "Sent email with title '$title' to '{$this->adminEmail}' that says '$message'.";
    }
}
```

**index.php**

```
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


echo "The same client code can work with other classes via adapter:\n";
$slackApi = new SlackApi("example.com", "XXXXXXXX");
$notification = new SlackNotification($slackApi, "Example.com Developers");
clientCode($notification);
```

















































