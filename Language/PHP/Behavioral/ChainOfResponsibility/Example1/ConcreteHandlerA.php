<?php
// ConcreteHandlerA.php

require_once 'AbstractHandler.php';

// Handles "A" type requests
class ConcreteHandlerA extends AbstractHandler
{
    public function handle(string $request): string
    {
        if ($request === "A") {
            return "ConcreteHandlerA handled the request.";
        }

        // Pass to next handler
        return parent::handle($request);
    }
}
