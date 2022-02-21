<?php

/**
 * The factory method pattern.
 */

namespace FactoryMethod;

class MotorcycleFactory {
    public static function create($type) {
        if (empty($type)) {
            Throw new \Exception('$type must contain a valid Motorcycle type.');
        }
        else {
            $full_classname = __NAMESPACE__ . '\Motorcycle' . ucwords($type);

            if (class_exists($full_classname)) {
                return new $full_classname;
            }
            else {
                Throw new \Exception('Motorcycle type not found.');
            }
        }
    }
}