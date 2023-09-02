<?php

namespace TheRayCode\Command;

class Light
{
    public function on(): void {
        echo "Light is ON\n";
    }

    public function off(): void {
        echo "Light is OFF\n";
    }
}