<?php

namespace TheRayCode\ChainOfResponsibility;

abstract class Handler
{
    public function handleRequest($request)
    {
        if ($request === 'A') {
            echo "ConcreteHandler1 handles request: $request\n";
        } else if ($this->nextHandler !== null) {
            $this->nextHandler->handleRequest($request);
        }
    }
}