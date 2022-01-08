<?php

interface IProductB
{
    public function usefulFunctionB(): string;

    public function anotherUsefulFunctionB(IProductA $collaborator): string;
}