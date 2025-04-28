[up](../README.md)

# 📄 README.md

# Builder Design Pattern in PHP 8.1

## 🧩 Overview
The **Builder Pattern** separates the construction of a complex object from its representation so that the same construction process can create different representations.

---

## 📚 Class Creation Order

1. **Product.php** (Product being built)
2. **Builder.php** (Abstract Builder)
3. **ConcreteBuilder.php** (Concrete implementation of Builder)
4. **Director.php** (Director that orchestrates the building)
5. **index.php** (Client code)

---

## 📁 Files

---

### 🔹 1. `Product.php`
```php
<?php
// Product.php

// Product class defines the complex object to be built
class Product
{
    private array $parts = [];

    // Add a part to the product
    public function addPart(string $part): void
    {
        $this->parts[] = $part;
    }

    // Show the parts that have been added to the product
    public function show(): void
    {
        echo "Product Parts:\n";
        foreach ($this->parts as $part) {
            echo "- $part\n";
        }
    }
}
?>
```

---

### 🔹 2. `Builder.php`
```php
<?php
// Builder.php

// Builder interface declares building steps
interface Builder
{
    public function buildPartA(): void;
    public function buildPartB(): void;
    public function getResult(): Product;
}
?>
```

---

### 🔹 3. `ConcreteBuilder.php`
```php
<?php
// ConcreteBuilder.php

include_once 'Product.php';
include_once 'Builder.php';

// ConcreteBuilder implements the Builder interface
class ConcreteBuilder implements Builder
{
    private Product $product;

    public function __construct()
    {
        $this->product = new Product();
    }

    // Build part A
    public function buildPartA(): void
    {
        $this->product->addPart("PartA");
    }

    // Build part B
    public function buildPartB(): void
    {
        $this->product->addPart("PartB");
    }

    // Return the final built product
    public function getResult(): Product
    {
        return $this->product;
    }
}
?>
```

---

### 🔹 4. `Director.php`
```php
<?php
// Director.php

include_once 'Builder.php';

// Director is responsible for executing the building steps
class Director
{
    private Builder $builder;

    // Set the builder to use
    public function setBuilder(Builder $builder): void
    {
        $this->builder = $builder;
    }

    // Construct the product step by step
    public function construct(): void
    {
        $this->builder->buildPartA();
        $this->builder->buildPartB();
    }
}
?>
```

---

### 🔹 5. `index.php` (Demo file)
```php
<?php
// index.php

include_once 'Director.php';
include_once 'ConcreteBuilder.php';

// Create Director and Builder objects
$director = new Director();
$builder = new ConcreteBuilder();

// Tell the Director which builder to use
$director->setBuilder($builder);

// Director constructs the product
$director->construct();

// Get the final product from the builder
$product = $builder->getResult();

// Display the built product
$product->show();
?>
```

---

## 🔥 How to Run

Simply place these files in the same directory (example: `/builder-pattern/`) and run `index.php` with PHP 8.1:

```bash
php index.php
```

Expected output:

```
Product Parts:
- PartA
- PartB
```

---

## ✏️ Code Summary

- **Product**: The complex object under construction.
- **Builder**: Abstract interface defining how to build parts.
- **ConcreteBuilder**: Implements the construction of parts and assembles the final object.
- **Director**: Orchestrates building steps using the builder interface.
- **Client (index.php)**: Tells the director to build a product.

---

