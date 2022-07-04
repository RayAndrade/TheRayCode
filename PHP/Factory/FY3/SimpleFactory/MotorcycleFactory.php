<?php

/**
 * The simple factory pattern.
 */

namespace SimpleFactory;

class MotorcycleFactory {
    public static function create($make, $model) {
        return new Motorcycle($make, $model);
    }
}
