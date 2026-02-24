<?php
// AbstractHandler.php

require_once 'Handler.php';

// AbstractHandler implements default chaining behavior
abstract class AbstractHandler implements Handler
{
    // Declare next handler with null default
    protected ?Handler $nextHandler = null;

    // Chain the next handler
    public function setNext(Handler $handler): Handler
    {
        $this->nextHandler = $handler;
        return $handler; // allows fluent chaining
    }

    // Try to handle request or pass to next handler
    public function handle(string $request): string
    {
        if ($this->nextHandler !== null) {
            return $this->nextHandler->handle($request);
        }

        return "No handler could process the request: $request";
    }
}
