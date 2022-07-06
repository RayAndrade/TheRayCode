<?php
class ExtendedAbstraction extends Abstraction
{
    public function operation(): string
    {
        return "ExtendedAbstraction: Extended operation with:<br/>" .
            $this->implementation->operationImplementation();
    }
}