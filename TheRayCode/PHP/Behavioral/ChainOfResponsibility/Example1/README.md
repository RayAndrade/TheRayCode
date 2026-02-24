[up](../README.md)

Let's focus on the **Chain of Responsibility** pattern using **PHP 8.2**.

This pattern allows a request to pass along a chain of handlers. Each handler decides either to process the request or pass it to the next handler in the chain.

### 📚 UML Participants (GoF Book p.223)

* **Handler**: defines interface for handling requests and links to the next handler.
* **ConcreteHandler**: processes request or forwards it.
* **Client**: initiates the request.

---

## 🧩 Class-by-Class Explanation

---

### 🔹 `Handler.php`

**Purpose**:
Defines the interface for all handlers. Declares a method `handle()` and a method `setNext()` to link the chain.

```php
<?php
// Handler.php

// Handler declares interface for handling requests and chaining handlers
interface Handler
{
    public function setNext(Handler $handler): Handler; // link to the next handler

    public function handle(string $request): ?string; // process or forward the request
}
```

---

### 🔹 `AbstractHandler.php`

**Purpose**:
Provides default chaining behavior. Concrete handlers can extend this and override `handle()`.

```php
<?php
// AbstractHandler.php

require_once 'Handler.php';

// AbstractHandler implements chaining logic
abstract class AbstractHandler implements Handler
{
    protected ?Handler $nextHandler = null; // stores next handler in the chain

    // Set the next handler and return it for chaining
    public function setNext(Handler $handler): Handler
    {
        $this->nextHandler = $handler;
        return $handler;
    }

    // Default handle method: if can't handle, pass to next
    public function handle(string $request): ?string
    {
        if ($this->nextHandler) {
            return $this->nextHandler->handle($request); // pass to next
        }

        return null; // no handler could process the request
    }
}
```

---

### 🔹 `ConcreteHandlerA.php`

**Purpose**:
Handles specific requests ("A"). Otherwise, it delegates.

```php
<?php
// ConcreteHandlerA.php

require_once 'AbstractHandler.php';

// ConcreteHandlerA processes 'A' type requests
class ConcreteHandlerA extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === 'A') {
            return "Handler A: I handled the request.";
        }

        // delegate to next handler
        return parent::handle($request);
    }
}
```

---

### 🔹 `ConcreteHandlerB.php`

**Purpose**:
Handles "B" type requests. Uses base class for delegation.

```php
<?php
// ConcreteHandlerB.php

require_once 'AbstractHandler.php';

// ConcreteHandlerB processes 'B' type requests
class ConcreteHandlerB extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === 'B') {
            return "Handler B: I handled the request.";
        }

        // delegate to next handler
        return parent::handle($request);
    }
}
```

---

### 🔹 `ConcreteHandlerC.php`

**Purpose**:
Handles "C" type requests.

```php
<?php
// ConcreteHandlerC.php

require_once 'AbstractHandler.php';

// ConcreteHandlerC processes 'C' type requests
class ConcreteHandlerC extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === 'C') {
            return "Handler C: I handled the request.";
        }

        // delegate to next handler
        return parent::handle($request);
    }
}
```

---

### 🚀 `index.php`

**Purpose**:
Acts as the client. It assembles the chain and sends a few requests.

```php
<?php
// index.php

require_once 'ConcreteHandlerA.php';
require_once 'ConcreteHandlerB.php';
require_once 'ConcreteHandlerC.php';

// Set up the chain: A -> B -> C
$a = new ConcreteHandlerA();
$b = new ConcreteHandlerB();
$c = new ConcreteHandlerC();

$a->setNext($b)->setNext($c); // chaining handlers

// Test requests
$requests = ['A', 'B', 'C', 'D'];

foreach ($requests as $request) {
    echo "Client: Who can handle '$request'?\n";
    $result = $a->handle($request);

    if ($result) {
        echo "$result\n";
    } else {
        echo "No handler could handle the request.\n";
    }

    echo str_repeat('-', 40) . "\n";
}
```

---

## ✅ Expected Output

```bash
Client: Who can handle 'A'?
Handler A: I handled the request.
----------------------------------------
Client: Who can handle 'B'?
Handler B: I handled the request.
----------------------------------------
Client: Who can handle 'C'?
Handler C: I handled the request.
----------------------------------------
Client: Who can handle 'D'?
No handler could handle the request.
----------------------------------------
```

---

## 🧠 Teaching Tips

* Chain of Responsibility decouples the sender from receivers.
* Use `setNext()` to change chain order at runtime.
* Encourage students to create a new handler (e.g. `HandlerD`) to extend functionality.

