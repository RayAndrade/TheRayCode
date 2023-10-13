<?php

class Light
{
    private string $color;

    public function __construct

    (string $color)
    {
        $this->color = $color;
    }
    public function shine(): string {
        return "<span style='color:{$this->color};'>*</span>";
    }
}