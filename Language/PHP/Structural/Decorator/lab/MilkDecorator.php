<?php

class MilkDecorator extends Decorator
{
    public function operation(): string {
        return parent::operation() . " + Milk";
    }
}