<?php
// ConcreteHandlerC.php

require_once 'AbstractHandler.php';

// Handles "C" type requests
class ConcreteHandlerC extends AbstractHandler
{
    public function handle(string $request): string
    {
        if ($request === "C") {
            return "ConcreteHandlerC handled the request.";
        }

        return parent::handle($request);
    }
}
