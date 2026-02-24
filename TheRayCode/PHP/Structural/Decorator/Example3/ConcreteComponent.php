<?php
require_once 'ComponentInterface.php';
class ConcreteComponent implements ComponentInterface
{

    public function operation(): string
    {
        return "ConcreteComponent";
    }
}