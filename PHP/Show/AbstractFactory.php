<?php

interface AbstractFactory
{
    public function createProductA(): IProductA;

    public function createProductB(): IProductB;
}