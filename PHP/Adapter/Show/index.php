<?php

namespace RefactoringGuru\Adapter\RealWorld;

include_once ('Notification.php');
include_once ('EmailNotification.php');
include_once ('SlackApi.php');

include_once ('SlackNotification.php');


/**
 * The client code can work with any class that follows the Target interface.
 */
function clientCode(Notification $notification)
{
    // ...

    echo $notification->send("Website is down!<br/>",
        "<br/><strong style='color:red;font-size: 50px;'>Alert!</strong> " .
        "<br/>Our website is not responding. Call admins and bring it up!<br/>");

    // ...
}

echo "Client code is designed correctly and works with email notifications:<br/>";
$notification = new EmailNotification("developers@example.com");
clientCode($notification);

echo "The same client code can work with other classes via adapter:<br/>";
$slackApi = new SlackApi("example.com", "XXXXXXXX");
$notification = new SlackNotification($slackApi, "Example.com Developers");
clientCode($notification);

echo "<br/><br/>";
echo "The Ray Code is AWESOME!!!";