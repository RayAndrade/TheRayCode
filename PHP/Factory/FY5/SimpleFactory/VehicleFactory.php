<?php

namespace TheRayCode\Factory\Simple;

class VehicleFactory
{
    public static function getVehicle(string $type): AbstractVehicle
    {
        switch ($type) {
            case 'Luxurious':
                return new Luxurious(['Mercedes','Bentley', 'BMW']);
            case 'LowCost':
                return new LowCost(['Fiat', 'Renault']);
            default:
                throw  new \Exception('Type is not valid');
        }

    }

}