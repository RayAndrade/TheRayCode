<?php
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