[up](../README.md)


The Prototype design pattern is used to create a fully initialized instance that can be cloned or copied rather than calling the actual constructor, which might be more costly in terms of resources.

**1. Order of Class Creation:**

1. `Prototype.php`: This will be our base Prototype class that will have a method for cloning.
2. `ConcretePrototype1.php` and `ConcretePrototype2.php`: These will be concrete implementations of the Prototype. Each will demonstrate how to perform both shallow and deep copies.
3. `index.php`: This will be our test script to demo the code.

**2. Files Explanation:**

**a. Prototype.php**

```php
<?php

abstract class Prototype
{
    protected $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }

    abstract public function shallowCopy(): Prototype;
    abstract public function deepCopy(): Prototype;

    public function getName()
    {
        return $this->name;
    }
}

?>
```

**b. ConcretePrototype1.php**

```php
<?php

include_once 'Prototype.php';

class ConcretePrototype1 extends Prototype
{
    private $details;

    public function __construct(string $name, $details)
    {
        parent::__construct($name);
        $this->details = $details;
    }

    public function shallowCopy(): Prototype
    {
        return clone $this;
    }

    public function deepCopy(): Prototype
    {
        $newDetails = clone $this->details;
        return new self($this->name, $newDetails);
    }

    public function getDetails()
    {
        return $this->details;
    }
}

?>
```

**c. ConcretePrototype2.php**

```php
<?php

include_once 'Prototype.php';

class ConcretePrototype2 extends Prototype
{
    private $attributes;

    public function __construct(string $name, $attributes)
    {
        parent::__construct($name);
        $this->attributes = $attributes;
    }

    public function shallowCopy(): Prototype
    {
        return clone $this;
    }

    public function deepCopy(): Prototype
    {
        $newAttributes = clone $this->attributes;
        return new self($this->name, $newAttributes);
    }

    public function getAttributes()
    {
        return $this->attributes;
    }
}

?>
```

**d. index.php**

```php
<?php

include_once 'ConcretePrototype1.php';
include_once 'ConcretePrototype2.php';

$prototype1 = new ConcretePrototype1("Prototype1", (object) ["property" => "value1"]);
$prototype2 = new ConcretePrototype2("Prototype2", (object) ["attribute" => "value2"]);

$shallowCopy1 = $prototype1->shallowCopy();
$deepCopy1 = $prototype1->deepCopy();

$shallowCopy2 = $prototype2->shallowCopy();
$deepCopy2 = $prototype2->deepCopy();

echo "Original Prototype1 Details: " . print_r($prototype1->getDetails(), true) . "<br>";
echo "Shallow Copy Prototype1 Details: " . print_r($shallowCopy1->getDetails(), true) . "<br>";
echo "Deep Copy Prototype1 Details: " . print_r($deepCopy1->getDetails(), true) . "<br>";

echo "Original Prototype2 Attributes: " . print_r($prototype2->getAttributes(), true) . "<br>";
echo "Shallow Copy Prototype2 Attributes: " . print_r($shallowCopy2->getAttributes(), true) . "<br>";
echo "Deep Copy Prototype2 Attributes: " . print_r($deepCopy2->getAttributes(), true) . "<br>";

?>
```

**3. How to See It in Browser:**

When you navigate to `index.php`, you should see the original, shallow copy, and deep copy details and attributes for both prototypes.

**Note**: 
- Shallow copying (achieved using the `clone` keyword) will copy an object, but if that object contains references to other objects (like our details and attributes in our prototypes), the references will remain. This means that changes to objects inside the shallow-copied object will affect the original as well.
- Deep copying, on the other hand, tries to clone the internal objects too, so they remain independent of the original. In our example, we used manual deep copying, but in more complex scenarios, you might need a more sophisticated approach.


you should see at the browser:

```
Original Prototype1 Details: stdClass Object ( [property] => value1 )
Shallow Copy Prototype1 Details: stdClass Object ( [property] => value1 )
Deep Copy Prototype1 Details: stdClass Object ( [property] => value1 )
Original Prototype2 Attributes: stdClass Object ( [attribute] => value2 )
Shallow Copy Prototype2 Attributes: stdClass Object ( [attribute] => value2 )
Deep Copy Prototype2 Attributes: stdClass Object ( [attribute] => value2 )
```


