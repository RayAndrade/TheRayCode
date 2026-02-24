<?php

include_once 'Prototype.php';
class ConcretePrototype2 extends Prototype
{
    private $attributes;

    public function __construct(string $name, $attributes)
    {
        parent::__construct($name);
        $this->attributes = $attributes;
    }

    public function shallowCopy(): Prototype
    {
        return clone $this;
    }

    public function deepCopy(): Prototype
    {
        $newAttributes = clone $this->attributes;
        return new self($this->name, $newAttributes);
    }

    public function getAttributes()
    {
        return $this->attributes;
    }
}