<?php

class ConcreteIterator implements Iterator
{
    private $aggregate;
    private $current = 0;

    public function __construct($aggregate) {
        $this->aggregate = $aggregate;
    }
    public function current()
    {
        return $this->aggregate->getItem($this->current);
    }

    public function next()
    {
        ++$this->current;
    }

    public function key()
    {
        return $this->current;
    }

    public function valid()
    {
        return $this->current < $this->aggregate->getCount();
    }

    public function rewind()
    {
        $this->current = 0;
    }
}