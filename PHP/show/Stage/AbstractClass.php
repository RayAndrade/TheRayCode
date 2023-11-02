<?php

abstract class AbstractClass
{
    final public function templateMethod(): void
    {
        $this->baseOperation1();
        $this->requiredOperations1();
        $this->baseOperation2();
        $this->hook1();
        $this->requiredOperation2();
        $this->baseOperation3();
        $this->hook2();
    }

    protected function baseOperation1(): void
    {
        echo "AbstractClass says: I am doing the bulk of the work<br/>";
    }
    protected function baseOperation2(): void
    {
        echo "AbstractClass says: But I let subclasses override some operations<br/>";
    }

    protected function baseOperation3(): void
    {
        echo "AbstractClass says: But I am doing the bulk of the work anyway<br/>";
    }
    abstract protected function requiredOperations1(): void;

    abstract protected function requiredOperation2(): void;
}