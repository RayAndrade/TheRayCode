<?php

class SheepIterator implements Iterator
{
    private array $sheepList;
    private int $position = 0;

    public function __construct(array $sheepList) {
        $this->sheepList = $sheepList;
    }
    public function current(): mixed
    {
        return $this->sheepList[$this->position];
    }

    public function next(): void
    {
        ++$this->position;
    }

    public function key(): int
    {
        return $this->position;
    }

    public function valid(): bool
    {
        return isset($this->sheepList[$this->position]);
    }

    public function rewind(): void
    {
        $this->position = 0;
    }
}