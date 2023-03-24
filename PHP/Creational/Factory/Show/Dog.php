<?php

namespace Show;
include_once "Animal.php";
class Dog extends Animal
{

    public function speak()
    {
        echo "Woof!\n";
    }
}