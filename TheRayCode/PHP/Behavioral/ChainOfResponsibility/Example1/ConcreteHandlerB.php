<?php
// ConcreteHandlerB.php

require_once 'AbstractHandler.php';

// Handles "B" type requests
class ConcreteHandlerB extends AbstractHandler
{
    public function handle(string $request): string
    {
        if ($request === "B") {
            return "ConcreteHandlerB handled the request.";
        }

        return parent::handle($request);
    }
}
