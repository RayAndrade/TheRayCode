<?php
include_once 'Prototype.php';
class ConcretePrototype1 extends Prototype
{
    private $details;

    public function __construct(string $name, $details)
    {
        parent::__construct($name);
        $this->details = $details;
    }

    public function shallowCopy(): Prototype
    {
        return clone $this;
    }

    public function deepCopy(): Prototype
    {
        $newDetails = clone $this->details;
        return new self($this->name, $newDetails);
    }

    public function getDetails()
    {
        return $this->details;
    }
}