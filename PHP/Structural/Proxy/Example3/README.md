[up](../README.md)

### Proxy Design Pattern:
The Proxy Design Pattern provides a surrogate or placeholder for another object to control access to it. This is useful in various scenarios, such as:
1. **Remote Proxy**: Represents an object in a different address space.
2. **Virtual Proxy**: Creates expensive objects on demand.
3. **Protection Proxy**: Controls access to the original object.

For this example, I'll use the **Virtual Proxy** scenario, where the Proxy class will delay the instantiation of an expensive object until it's actually required.

### Step 1: Define the Subject Interface
This defines the common methods both the RealObject and Proxy will implement.

**Subject.php**
```php
<?php

interface Subject {
    public function request(): string;
}

?>
```

### Step 2: Create the RealSubject Class
This is the actual class that performs the core operations. In our case, it simulates an "expensive" operation.

**RealSubject.php**
```php
<?php

include_once 'Subject.php';

class RealSubject implements Subject {
    public function __construct() {
        // Simulate an expensive creation operation
        sleep(2);  // Delay for 2 seconds
    }

    public function request(): string {
        return "RealSubject: Handling request.";
    }
}

?>
```

### Step 3: Create the Proxy Class
This class will have a reference to the RealSubject and will instantiate it only when required.

**Proxy.php**
```php
<?php

include_once 'Subject.php';
include_once 'RealSubject.php';

class Proxy implements Subject {
    private ?RealSubject $realSubject = null;

    public function request(): string {
        if ($this->realSubject === null) {
            $this->realSubject = new RealSubject();
        }
        return $this->realSubject->request();
    }
}

?>
```

### Step 4: Create the index.php for Demonstration

**index.php**
```php
<?php

include_once 'Proxy.php';

$proxy = new Proxy();

// The client code may or may not know about the RealSubject's existence.
// In this case, we're just interacting through the proxy.
echo $proxy->request();

?>
```

### Order of Creating Classes:

1. `Subject.php`: Define the interface which will be implemented by the Proxy and the RealSubject.
2. `RealSubject.php`: The actual class performing the core logic.
3. `Proxy.php`: Contains a reference to the RealSubject and instantiates it when necessary.
4. `index.php`: The client code, which interacts with the RealSubject through the Proxy.

### Expected Output on Browser:

When you access `index.php`, there will be a delay of 2 seconds (because of our artificial delay in `RealSubject`), after which you should see:

```
RealSubject: Handling request.
```

### Explanation:

- **Subject (interface)**: This represents the common interface for both the RealSubject and Proxy so that they can be used interchangeably.
- **RealSubject (class)**: This is the actual class that does the heavy lifting (our example simulates it with a sleep).
- **Proxy (class)**: This class serves as an intermediary which, upon receiving a request, creates the RealSubject if it hasn't been instantiated and then delegates the request to it.

The proxy pattern allows you to delay or control the instantiation and access to certain objects, which is especially useful when working with resources that are expensive in terms of time or computation.
