<?php

class User
{
    protected $name;
    protected $chatMediator;

    public function __construct(string $name, ChatRoomMediator $mediator) {
        $this->name = $name;
        $this->chatMediator = $mediator;
    }

    public function getName(): string {
        return $this->name;
    }

    public function send(string $message): void {
        $this->chatMediator->showMessage($this, $message);
    }
}