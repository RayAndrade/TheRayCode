<?php

class Visitor2 implements Visitor
{
    public function visitComponentA(ComponentA $element): void
    {
        echo $element->exclusiveMethodOfComponentA() . " + Visitor2<br/>";
    }

    public function visitComponentB(ComponentB $element): void
    {
        echo $element->specialMethodOfComponentB() . " + Visitor2<br/>";
    }
}