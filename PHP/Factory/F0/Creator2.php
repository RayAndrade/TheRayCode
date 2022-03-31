<?php
class Creator2 extends Creator
{
    public function factoryMethod(): Product
    {
        return new Product2();
    }
}