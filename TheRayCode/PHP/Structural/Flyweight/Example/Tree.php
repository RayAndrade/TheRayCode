<?php

class Tree
{
    private int $x;
    private int $y;
    private TreeType $type;

    public function __construct(int $x, int $y, TreeType $type)
    {
        $this->x = $x;
        $this->y = $y;
        $this->type = $type;
    }

    public function draw(string $canvas): void
    {
        $this->type->draw($canvas, $this->x, $this->y);
    }
}