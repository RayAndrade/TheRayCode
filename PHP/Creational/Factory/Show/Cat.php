<?php

namespace Show;
include_once "Animal.php";

class Cat extends Animal
{

    public function speak()
    {
        echo "Meow!\n";
    }
}