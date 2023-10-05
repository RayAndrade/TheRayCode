<?php
class Class1 extends AbstractClass
{
    protected function requiredOperations1(): void
    {
        echo "ConcreteClass1 says: Implemented Operation1<br/>";
    }

    protected function requiredOperation2(): void
    {
        echo "ConcreteClass1 says: Implemented Operation2<br/>";
    }
}
