<?php

class ConcreteComponent implements Component
{
    public function operation(): string {
        return "Plain Coffee";
    }
}