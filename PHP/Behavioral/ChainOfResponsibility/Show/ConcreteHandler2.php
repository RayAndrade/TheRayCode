<?php

namespace TheRayCode\ChainOfResponsibility;

include ('Handler.php');
class ConcreteHandler2 extends Handler
{
    public function handleRequest($request)
    {
        if ($request === 'B') {
            echo "ConcreteHandler2 handles request: $request\n";
        } else if ($this->nextHandler !== null) {
            $this->nextHandler->handleRequest($request);
        }
    }
}