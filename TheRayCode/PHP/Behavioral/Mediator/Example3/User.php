<?php
require_once 'Mediator.php';
class User
{
    private string $name;
    private Mediator $chatRoom;

    public function __construct(string $name, Mediator $chatRoom) {
        $this->name = $name;
        $this->chatRoom = $chatRoom;
    }

    public function getName(): string {
        return $this->name;
        // Returns the name of the user.
    }

    public function send(string $message): void {
        echo $this->name . " sends message: " . $message . "<br/>";
        $this->chatRoom->sendMessage($message, $this);
        // Sends a message to the chat room, which then notifies all other users.
    }

    public function receive(string $message): void {
        echo $this->name . " received message: " . $message . "<br/>";
        // Method used by the chat room to deliver messages to this user.
    }
}