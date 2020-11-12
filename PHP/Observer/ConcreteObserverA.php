<?php
class ConcreteObserverA implements SplObserver
{
    public function update(\SplSubject $subject): void
    {
        if ($subject->state < 3) {
            echo "ConcreteObserverA: Reacted to the event.<br/>";
        }
    }
}
