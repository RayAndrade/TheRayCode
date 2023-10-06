<?php
interface Visitor
{
    public function visitComponentA(ComponentA $element): void;

    public function visitComponentB(ComponentB $element): void;
}
