<?php

namespace TheRayCode\AbstractFactory;

require_once 'Cat.php';
class CatFactory extends AbstractPetFactory
{


    public function createCat(): Dog {
            throw new Exception('Cannot create dogs from a cat factory');
        }
}