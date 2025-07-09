[top](../README.md)

## ✅ Overview of the Interpreter Pattern (GoF)

**Purpose**: Define a grammar for a language and use an interpreter to interpret sentences in that language.

---

### 📘 UML Participants (GoF Terminology)

| Role                      | Class Name              | Description                                                |
| ------------------------- | ----------------------- | ---------------------------------------------------------- |
| **AbstractExpression**    | `AbstractExpression`    | Declares an interface for interpreting                     |
| **TerminalExpression**    | `TerminalExpression`    | Implements interpretation for terminal symbols             |
| **NonterminalExpression** | `NonterminalExpression` | Implements interpretation for grammar rules                |
| **Context**               | `Context`               | Contains global information during interpretation          |
| **Client**                | `Client`                | Builds the abstract syntax tree and invokes interpretation |

---

## 📁 Code File Structure

Each class will be placed in its own `.php` file, followed by an `index.php` demo to show how it all works.

---

### 🗂️ `AbstractExpression.php`

**Purpose**: Declares the interface that all expressions (terminal or not) will implement.

```php
<?php
// AbstractExpression.php

interface AbstractExpression
{
    public function interpret($context);
}
```

---

### 🗂️ `TerminalExpression.php`

**Purpose**: Implements the interpretation for terminal symbols (e.g., literals).

```php
<?php
// TerminalExpression.php

require_once 'AbstractExpression.php';

class TerminalExpression implements AbstractExpression
{
    private $data;

    public function __construct($data)
    {
        $this->data = $data; // Store the literal value
    }

    public function interpret($context)
    {
        // Return true if context contains the literal value
        return strpos($context, $this->data) !== false;
    }
}
```

---

### 🗂️ `OrExpression.php`

**Purpose**: A non-terminal expression. It checks if *either* expression matches the context.

```php
<?php
// OrExpression.php

require_once 'AbstractExpression.php';

class OrExpression implements AbstractExpression
{
    private $expr1;
    private $expr2;

    public function __construct(AbstractExpression $expr1, AbstractExpression $expr2)
    {
        $this->expr1 = $expr1;
        $this->expr2 = $expr2;
    }

    public function interpret($context)
    {
        return $this->expr1->interpret($context) || $this->expr2->interpret($context);
    }
}
```

---

### 🗂️ `AndExpression.php`

**Purpose**: A non-terminal expression. It checks if *both* expressions match the context.

```php
<?php
// AndExpression.php

require_once 'AbstractExpression.php';

class AndExpression implements AbstractExpression
{
    private $expr1;
    private $expr2;

    public function __construct(AbstractExpression $expr1, AbstractExpression $expr2)
    {
        $this->expr1 = $expr1;
        $this->expr2 = $expr2;
    }

    public function interpret($context)
    {
        return $this->expr1->interpret($context) && $this->expr2->interpret($context);
    }
}
```

---

### 🚀 `index.php` (Client)

**Purpose**: Demonstrates how to build expressions and interpret them with a given context.

```php
<?php
// index.php

require_once 'TerminalExpression.php';
require_once 'OrExpression.php';
require_once 'AndExpression.php';

// Rule: "Ray or Andrade"
$ray = new TerminalExpression("Ray");
$andrade = new TerminalExpression("Andrade");
$rayOrAndrade = new OrExpression($ray, $andrade);

// Rule: "Ray AND Developer"
$developer = new TerminalExpression("Developer");
$rayAndDeveloper = new AndExpression($ray, $developer);

// Test interpretation
echo "Test 1: 'Ray Andrade' matches Ray OR Andrade? ";
echo $rayOrAndrade->interpret("Ray Andrade") ? "Yes\n" : "No\n";

echo "Test 2: 'Ray is a Developer' matches Ray AND Developer? ";
echo $rayAndDeveloper->interpret("Ray is a Developer") ? "Yes\n" : "No\n";

echo "Test 3: 'Andrade is a Developer' matches Ray AND Developer? ";
echo $rayAndDeveloper->interpret("Andrade is a Developer") ? "Yes\n" : "No\n";
```

---

### ✅ Output

```
Test 1: 'Ray Andrade' matches Ray OR Andrade? Yes
Test 2: 'Ray is a Developer' matches Ray AND Developer? Yes
Test 3: 'Andrade is a Developer' matches Ray AND Developer? No
```

---

## 📘 Summary

* This is a **simple language parser** using boolean rules.
* The Interpreter pattern can handle arithmetic expressions, command parsers, and other DSLs (domain-specific languages).
* This implementation is educational and models the **GoF class structure** exactly.
