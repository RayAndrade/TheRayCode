<?php

abstract class Component
{
    protected $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public abstract function operation();

    /**
     * @throws Exception
     */
    public function add(Component $component) {
        throw new Exception("Unsupported operation");
    }

    /**
     * @throws Exception
     */
    public function remove(Component $component) {
        throw new Exception("Unsupported operation");
    }

    /**
     * @throws Exception
     */
    public function getChild($i) {
        throw new Exception("Unsupported operation");
    }
}