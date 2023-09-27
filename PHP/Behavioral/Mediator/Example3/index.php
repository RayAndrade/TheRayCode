<?php
include_once 'ChatRoom.php';

$chatroom = new ChatRoom();

$john = new User("John", $chatroom);
$alice = new User("Alice", $chatroom);
$bob = new User("Bob", $chatroom);

$chatroom->addUser($john);
$chatroom->addUser($alice);
$chatroom->addUser($bob);

$john->send("Hello, Alice!");
