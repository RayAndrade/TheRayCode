<?php

namespace TheRayCode\ChainOfResponsibility;

include ('Handler.php');
class ConcreteHandler1 extends Handler
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