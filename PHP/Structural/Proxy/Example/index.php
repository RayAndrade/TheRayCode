<?php
include_once 'Proxy.php';

$proxy = new Proxy();

// The client code may or may not know about the RealSubject's existence.
// In this case, we're just interacting through the proxy.
echo $proxy->request();