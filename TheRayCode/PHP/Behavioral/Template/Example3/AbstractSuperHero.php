<?php

abstract class AbstractSuperHero
{
// Template method
    public final function describeHero() {
        $this->origin();
        $this->powers();
        $this->mission();
    }

    // Abstract methods to be implemented by concrete classes
    abstract protected function origin();
    abstract protected function powers();
    abstract protected function mission();
}