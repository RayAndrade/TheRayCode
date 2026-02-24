<?php

require_once 'ChatRoom.php';
require_once 'User.php';

$chatroom = new ChatRoom();

$user1 = new User("Alice", $chatroom);
$user2 = new User("Bob", $chatroom);

$chatroom->addUser($user1);
$chatroom->addUser($user2);

$user1->send("Hello Bob!");
$user2->send("Hey Alice!");
