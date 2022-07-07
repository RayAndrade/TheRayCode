<?php


class ComponentA extends BaseComponent
{
    public function doA(): void
    {
        echo "Component A does A.<br/>";
        $this->mediator->notify($this, "A");
    }

    public function doB(): void
    {
        echo "Component B does B.<br/>";
        $this->mediator->notify($this, "B");
    }
}