<?php
require_once 'Decorator.php';
class ConcreteDecoratorA extends Decorator
{
    public function operation(): string
    {
        return "ConcreteDecoratorA(" . $this->component->operation() . ")";
    }
}