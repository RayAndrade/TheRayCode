<?php


namespace TheRayCode\Builder;


interface Builder
{
    public function producePartA(): void;
    public function producePartB(): void;
    public function producePartC(): void;
}
