<?php

namespace TheRayCode\Factory;
require_once 'Cat.php';

class CatFactory implements AbstractPetFactory {
    public function createCat(): Cat {
        return new class implements Cat {
            public function meow(): string {
                return 'Meow! I am a Persian cat.';
            }
        };
    }

    public function createDog(): Dog {
        throw new Exception('Cannot create dogs from a cat factory');
    }
}