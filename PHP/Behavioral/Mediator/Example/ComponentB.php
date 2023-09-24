<?php

class ComponentB extends BaseComponent
{
    public function doC(): void
    {
        echo "Component A does C.<br/>";
        $this->mediator->notify($this, "C");
    }

    public function doD(): void
    {
        echo "Component B does D.<br/>";
        $this->mediator->notify($this, "D");
    }
}