<?php
include_once 'Car.php';
include_once 'Doll.php';
class ToyFactory
{
    public function createToy($toyType)
    {
        switch ($toyType) {
            case "Car":
                return new Car();
            case "Doll":
                return new Doll();
            default:
                throw new Exception("Invalid toy type");
        }
    }
}