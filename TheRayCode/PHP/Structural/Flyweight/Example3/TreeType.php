<?php

class TreeType
{
    private string $name;
    private string $color;
    private string $texture;

    public function __construct(string $name, string $color, string $texture) {
        $this->name = $name;
        $this->color = $color;
        $this->texture = $texture;
    }

    public function render(int $x, int $y): string {
        return "Rendered a $this->name at ($x, $y) with color $this->color and texture $this->texture.<br>";
    }
}