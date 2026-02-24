<?php

abstract class Prototype
{
    protected $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }

    abstract public function shallowCopy(): Prototype;
    abstract public function deepCopy(): Prototype;

    public function getName()
    {
        return $this->name;
    }
}