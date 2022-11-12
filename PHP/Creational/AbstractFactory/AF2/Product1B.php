<?php
include_once "AbstractProduct1.php";
class Product1B extends AbstractProduct1
{

    public function Display()
    {
        echo "Inside Product1B::Display()\n";
    }
}