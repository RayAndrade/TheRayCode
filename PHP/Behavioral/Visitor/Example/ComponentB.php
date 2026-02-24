<?php
class ComponentB implements Component
{
    /**
     * Same here: visitConcreteComponentB => ConcreteComponentB
     */
    public function accept(Visitor $visitor): void
    {
        $visitor->visitComponentB($this);
    }

    public function specialMethodOfComponentB(): string
    {
        return "B";
    }
}