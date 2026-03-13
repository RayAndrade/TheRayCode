<?php
require_once 'AbstractHandler.php';
class ConcreteHandlerC extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === 'C') {
            return "Handler C: I handled the request.";
        }
        return parent::handle($request);
    }
}