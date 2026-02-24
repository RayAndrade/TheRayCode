<?php
// Handler.php

// This interface defines the structure for handlers in the chain.
interface Handler
{
    // Set the next handler in the chain and return it to allow method chaining
    public function setNext(Handler $handler): Handler;

    // Handle the request or pass it to the next handler
    public function handle(string $request): string;
}
