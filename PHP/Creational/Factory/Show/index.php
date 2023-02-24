<?php

// Base class
abstract class Shape {
    abstract public function draw();
}

// Concrete classes
class Circle extends Shape {
    public function draw() {
        echo "Inside Circle::draw() method.\n";
    }
}

class Rectangle extends Shape {
    public function draw() {
        echo "Inside Rectangle::draw() method.\n";
    }
}

class Square extends Shape {
    public function draw() {
        echo "Inside Square::draw() method.\n";
    }
}

// Factory class
class ShapeFactory {
    public static function createShape($type) {
        switch ($type) {
            case 'circle':
                return new Circle();
            case 'rectangle':
                return new Rectangle();
            case 'square':
                return new Square();
            default:
                return null;
        }
    }
}

// Client code
$shape1 = ShapeFactory::createShape('circle');
$shape1->draw();
$shape2 = ShapeFactory::createShape('rectangle');
$shape2->draw();
$shape3 = ShapeFactory::createShape('square');
$shape3->draw();
