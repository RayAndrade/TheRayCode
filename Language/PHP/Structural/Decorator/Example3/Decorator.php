<?php
require_once 'ComponentInterface.php';
abstract class Decorator implements ComponentInterface
{
    protected ComponentInterface $component;

    public function __construct(ComponentInterface $component) {
        $this->component = $component;
    }
    abstract public function operation(): string;
}