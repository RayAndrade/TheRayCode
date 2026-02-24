<?php
include_once ('Subject.php');
include_once ('RealSubject.php');
include_once ('Proxy.php');


function clientCode(Subject $subject)
{
    // ...

    $subject->request();

    // ...
}

echo "Client: Executing the client code with a real subject:<br/>";
$realSubject = new RealSubject;
clientCode($realSubject);

echo "<br/>";

echo "Client: Executing the same client code with a proxy:<br/>";
$proxy = new Proxy($realSubject);
clientCode($proxy);
