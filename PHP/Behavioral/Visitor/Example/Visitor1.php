<?php
class Visitor1 implements Visitor
{
    public function visitComponentA(ComponentA $element): void
    {
        echo $element->exclusiveMethodOfComponentA() . " + Visitor1<br/>";
    }

    public function visitComponentB(ComponentB $element): void
    {
        echo $element->specialMethodOfComponentB() . " + Visitor1<br/>";
    }
}
