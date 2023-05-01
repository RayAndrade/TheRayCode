<?php

namespace TheRayCode\Factory;
require_once 'Dog.php';

class DogFactory implements AbstractPetFactory {
    public function createCat(): Cat {
        throw new Exception('Cannot create cats from a dog factory');
    }

    public function createDog(): Dog {
        return new class implements Dog {
            public function bark(): string {
                return 'Woof! I am a Labrador.';
            }
        };
    }
}