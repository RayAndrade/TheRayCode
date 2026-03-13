<?php
require_once 'AbstractHandler.php';

class ConcreteHandlerA extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === 'A') {
            return "Handler A: I handled the request.";
        }
        return parent::handle($request);
    }
}