<?php

namespace TheRayCode\Command;

class Robot
{
    public function assemble(): void {
        echo "Robot is being assembled.\n";
    }

    public function test(): void {
        echo "Robot is being tested.\n";
    }

    public function deploy(): void {
        echo "Robot is deployed for work.\n";
    }
}