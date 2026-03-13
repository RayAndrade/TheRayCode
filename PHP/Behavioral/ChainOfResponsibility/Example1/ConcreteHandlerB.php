<?php
require_once 'AbstractHandler.php';
class ConcreteHandlerB extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === 'B') {
            return "Handler B: I handled the request.";
        }
        return parent::handle($request);
    }
}