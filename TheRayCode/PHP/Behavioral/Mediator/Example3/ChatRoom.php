<?php
require_once 'Mediator.php';
require_once 'User.php';

class ChatRoom implements Mediator
{
    /**
     * @var User[]
     */
    private array $users = [];

    public function addUser(User $user): void {
        $this->users[] = $user;
        // Adds a user to the chat room.
    }
    public function sendMessage(string $message, User $user): void
    {
        foreach ($this->users as $u) {
            // Message should not be sent back to the user who sent it, but to all other users (broadcast).
            if ($u !== $user) {
                $u->receive($message);
            }
        }
    }
}