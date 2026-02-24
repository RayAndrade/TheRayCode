<?php

class TreeType
{
    private string $name;
    private string $color;
    private string $texture;

    public function __construct(string $name, string $color, string $texture)
    {
        $this->name = $name;
        $this->color = $color;
        $this->texture = $texture;
    }

    public function draw(string $canvas, int $x, int $y): void
    {
        // Here, you can implement the code to draw the tree on the canvas.
        // This is a mock implementation of the draw method, which in a real-world scenario would render the tree on the screen.
        echo "TreeType: Draw a '$this->name' tree with color '$this->color' and texture '$this->texture' at ($x, $y) on canvas: $canvas.<br>";
    }
}