<?php
include_once 'Mediator.php';
include_once 'User.php';

class ChatRoom implements Mediator
{
    private $users = [];

    public function addUser(User $user) {
        $this->users[] = $user;
    }

    public function sendMessage($message, $user)
    {
        foreach ($this->users as $u) {
            // Don't send the message back to the sender
            if ($u !== $user) {
                $u->receive($message);
            }
        }
    }
}