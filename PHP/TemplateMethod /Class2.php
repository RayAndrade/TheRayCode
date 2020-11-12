<?php

class Class2 extends AbstractClass
{
    protected function requiredOperations1(): void
    {
        echo "ConcreteClass2 says: Implemented Operation1<br/>";
    }

    protected function requiredOperation2(): void
    {
        echo "ConcreteClass2 says: Implemented Operation2<br/>";
    }

    protected function hook1(): void
    {
        echo "ConcreteClass2 says: Overridden Hook1<br/>";
    }
}