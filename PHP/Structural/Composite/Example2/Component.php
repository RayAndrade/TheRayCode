<?php

abstract  class Component
{
    protected $name;
    public function __construct(string $name) {
        $this->name = $name;
    }
    abstract public function draw(): void;

    /**
     * @throws Exception
     */
    public function add(Component $component): void {
        throw new Exception("Cannot add to a leaf");
    }

    /**
     * @throws Exception
     */
    public function remove(Component $component): void {
        throw new Exception("Cannot remove from a leaf");
    }
}