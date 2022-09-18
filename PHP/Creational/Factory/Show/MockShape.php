<?php

namespace TheRayCode\Factory;

class MockShape implements Shape
{

    public function draw()
    {
        // does a lot of mock stuff
        return true;
    }
}