<?php

class Creator1 extends Creator
{

    public function factoryMethod(): Product
    {
        return new Product1();
    }
}