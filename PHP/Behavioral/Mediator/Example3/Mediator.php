<?php

interface Mediator
{
    public function sendMessage(string $message, User $user): void;
    // The Mediator interface declares a method used for sending messages between components.
}