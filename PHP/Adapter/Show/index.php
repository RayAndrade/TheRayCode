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
    echo $notification->send("The Ray Code is <br/>",
        "<br/><strong style='color:red;font-size: 50px;'>AWESOME!!!</strong> " .
        "<br/>Tell your friends");

}

echo "The Ray Code is AWESOME!!! They need to know<br/>";
$notification = new EmailNotification("friends@TheRayCod.org");
clientCode($notification);

echo " The same client code can work with other classes via adapter";
$slackApi = new SlackApi("TheRayCode.com", "XXXXXXXX");
$notification = new SlackNotification($slackApi, "RayAndrade.org Developers");
clientCode($notification);

echo "<br/><br/>";
echo "The Ray Code is AWESOME!!!";