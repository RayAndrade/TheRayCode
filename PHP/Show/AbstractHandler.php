<?php


namespace TheRayCode\ChainOfResponsibility;


class AbstractHandler implements Handler
{

    public function setNext(Handler $handler): Handler
    {
        $this->nextHandler = $handler;
        return $handler;
    }

    public function handle(string $request): ?string
    {
        return $this->nextHandler->handle($request);
    }
}