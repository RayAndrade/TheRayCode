<?php


class SolidMediator implements Mediator
{
    private $componentA;

    private $componentB;

    public function __construct(ComponentA $cA, ComponentB $cB)
    {
        $this->componentA = $cA;
        $this->componentA->setMediator($this);
        $this->componentB = $cB;
        $this->componentB->setMediator($this);
    }

    public function notify(object $sender, string $event): void
    {
        if ($event == "A") {
            echo "Mediator reacts on A and triggers following operations:<br/>";
            $this->componentB->doC();
        }

        if ($event == "D") {
            echo "Mediator reacts on D and triggers following operations:<br/>";
            $this->componentA->doB();
            $this->componentB->doC();
        }
    }
}
