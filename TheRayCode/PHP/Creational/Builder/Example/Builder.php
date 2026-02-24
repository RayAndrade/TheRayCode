<?php

interface Builder
{
    public function buildPartA(): void;
    public function buildPartB(): void;
    public function getResult(): Product;
}