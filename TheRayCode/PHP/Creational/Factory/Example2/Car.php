<?php
include_once 'ToyInterface.php';
class Car implements ToyInterface
{

    public function make()
    {
        return "Making a car toy...";
    }
}