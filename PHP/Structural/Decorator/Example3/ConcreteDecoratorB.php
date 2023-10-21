<?php
require_once 'Decorator.php';
class ConcreteDecoratorB extends Decorator
{

    public function operation(): string
    {
        return "ConcreteDecoratorB(" . $this->component->operation() . ")";
    }
}