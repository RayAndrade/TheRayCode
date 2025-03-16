[up](../README.md)

# Factory Design Pattern in PHP

## Introduction
The Factory Design Pattern is a creational pattern that provides an interface for creating objects in a superclass but allows subclasses to alter the type of objects that will be created.

## Class Structure
### 1. Product Interface (`Product.php`)
Defines a common interface that all concrete products must implement.

```php
interface Product {
    public function operation(): string;
}
```

### 2. Concrete Products
#### Concrete Product A (`ConcreteProductA.php`)
```php
class ConcreteProductA implements Product {
    public function operation(): string {
        return "Result from ConcreteProductA";
    }
}
```

#### Concrete Product B (`ConcreteProductB.php`)
```php
class ConcreteProductB implements Product {
    public function operation(): string {
        return "Result from ConcreteProductB";
    }
}
```

### 3. Factory Interface (`Creator.php`)
Defines the method `factoryMethod()` that must be implemented by all concrete factories.

```php
interface Creator {
    public function factoryMethod(): Product;
}
```

### 4. Concrete Factories
#### Concrete Factory A (`ConcreteCreatorA.php`)
Creates instances of `ConcreteProductA`.

```php
class ConcreteCreatorA implements Creator {
    public function factoryMethod(): Product {
        return new ConcreteProductA();
    }
}
```

#### Concrete Factory B (`ConcreteCreatorB.php`)
Creates instances of `ConcreteProductB`.

```php
class ConcreteCreatorB implements Creator {
    public function factoryMethod(): Product {
        return new ConcreteProductB();
    }
}
```

### 5. Client Code (`index.php`)
Demonstrates how to use the Factory pattern.

```php
function clientCode(Creator $creator) {
    echo "Client: I'm working with " . get_class($creator) . "<br>";
    $product = $creator->factoryMethod();
    echo "Product says: " . $product->operation() . "<br><br>";
}

// Testing both factories
clientCode(new ConcreteCreatorA());
clientCode(new ConcreteCreatorB());
```

## Expected Output
```
Client: I'm working with ConcreteCreatorA
Product says: Result from ConcreteProductA

Client: I'm working with ConcreteCreatorB
Product says: Result from ConcreteProductB
```

## Summary
- **Factory Method** promotes loose coupling.
- It allows adding new product types without modifying existing code.
- Concrete factories encapsulate the object creation logic.


