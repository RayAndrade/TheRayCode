<?php
require_once 'User.php';
require_once 'ChatRoom.php';

// Create a chatroom (mediator)
$chatroom = new ChatRoom();

// Create users
$john = new User("John", $chatroom);
$jane = new User("Jane", $chatroom);

// Users send messages
$john->send("Hello Jane!");
$jane->send("Hey John, how are you?");