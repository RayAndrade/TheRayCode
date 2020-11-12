<?php

class Component2 extends BaseComponent
{
    public function doC(): void
    {
        echo "Component 2 does C.<br/>";
        $this->mediator->notify($this, "C");
    }

    public function doD(): void
    {
        echo "Component 2 does D.<br/>";
        $this->mediator->notify($this, "D");
    }
}