<?php

namespace TheRayCode\Decorator;

class SugarDecorator extends Decorator
{
    public function operation(): string {
        return parent::operation() . " + Sugar";
    }
}