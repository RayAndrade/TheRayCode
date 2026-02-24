<?php

require_once 'ChatRoomMediator.php';
require_once 'User.php';

class ChatRoom implements ChatRoomMediator
{

    public function showMessage(User $user, string $message): void
    {
        $time = date('H:i');
        $sender = $user->getName();

        echo "$time [$sender]: $message<br>";
    }
}