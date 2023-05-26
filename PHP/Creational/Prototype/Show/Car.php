<?php

namespace TheRayCode\Prototype;

class Car
{
    private string $model;
    public string $color;
    private int $year;

    public function __construct(string $model, string $color, int $year) {
        $this->model = $model;
        $this->color = $color;
        $this->year = $year;
    }

    public function clone(): Car {
        return clone $this;
    }

    public function getInfo(): string {
        return "Model: $this->model, Color: $this->color, Year: $this->year";
    }
}