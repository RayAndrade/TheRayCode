<?php
require_once 'Handler.php';
abstract class AbstractHandler implements Handler
{
    protected ?Handler $nextHandler = null;
    public function setNext(Handler $handler): Handler
    {
        $this->nextHandler = $handler;
        return $handler;
    }
    public function handle(string $request): ?string
    {
        if ($this->nextHandler) {
            return $this->nextHandler->handle($request); // pass to next
        }

        return null; // no handler could process the request
    }

}