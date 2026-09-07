# Prototype Design Pattern in Python

## Overview

This project demonstrates the **Prototype** Design Pattern as described in the book **Design Patterns: Elements of Reusable Object-Oriented Software**
by Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides
(The Gang of Four).

The implementation closely follows the UML diagram found on pages
114–115 of the book while adapting cloning to Python using the
built-in `copy` module.

---

# Purpose

The Prototype pattern allows new objects to be created by cloning an
existing object rather than constructing them from scratch.

This technique is useful when object creation is expensive or when many
objects begin with the same initial state.

---

# Pattern Participants

## Prototype

Declares the cloning interface.

In Python this is implemented as an abstract base class containing the
`clone()` method.

---

## ConcretePrototype

Implements the Prototype interface.

This class performs the actual cloning operation using
`copy.deepcopy()`.

---

## Client

Creates new objects by asking an existing Prototype to clone itself.

The Client never constructs another ConcretePrototype directly.

---

## Main

Creates the original Prototype object.

The Main program asks the Client to clone it and then displays the
results.

---

# Project Structure

prototype/

    prototype.py
    concrete_prototype.py
    client.py
    main.py
    README.md

---

# Program Execution

Original Prototype

↓

ConcretePrototype

↓

clone()

↓

Clone 1

Clone 2

↓

Each clone changes independently

---

# Expected Output

Original State

State A

State B

The original object remains unchanged while each cloned object develops
its own state.

---

# Python Cloning

Python does not provide a universal `clone()` method.

Instead, cloning is performed using the `copy` module.

```
import copy

copy.copy(object)       # Shallow copy

copy.deepcopy(object)   # Deep copy
```

This example uses **deep copying** so that every cloned object is
completely independent.

---

# Design Pattern Benefits

* Reduces expensive object construction.
* Hides object creation from the Client.
* Allows new objects to be created from existing ones.
* Supports runtime creation of similar objects.
* Produces independent objects after cloning.

---

# Design Pattern Drawbacks

* Deep copying large object graphs may be expensive.
* Some objects require custom cloning logic.
* Circular references may complicate cloning.
* Understanding shallow versus deep copying is essential.

---

# Correspondence with the GoF UML

| UML | Python |
|------|--------|
| Prototype | Prototype |
| ConcretePrototype | ConcretePrototype |
| Client | Client |
| clone() | clone() |

The class names intentionally remain close to the Gang of Four UML to
make comparing the code with the design easier.

---

Yes. In fact, I think that's the **best approach** for your audience.

Your videos are teaching the **Gang of Four Design Patterns**, not just "how to write Python." Keeping the class names close to the UML helps viewers connect the book, the UML, and the Python code.

For the Prototype pattern (pp. 114–115), I suggest we stay as faithful as practical to the book.

For example:

```
prototype/
│
├── prototype.py          # Abstract Prototype
├── concrete_prototype.py # ConcretePrototype
├── client.py             # Client
└── main.py               # Driver program
```

### prototype.py

```python
from abc import ABC, abstractmethod

class Prototype(ABC):

    @abstractmethod
    def clone(self):
        pass
```

### concrete_prototype.py

```python
import copy
from prototype import Prototype


class ConcretePrototype(Prototype):

    def __init__(self, state):
        self.state = state

    def clone(self):
        return copy.deepcopy(self)
```

### client.py

```python
class Client:

    @staticmethod
    def demonstrate(prototype):
        clone1 = prototype.clone()
        clone2 = prototype.clone()

        clone1.state = "State A"
        clone2.state = "State B"

        return clone1, clone2
```

### main.py

```python
from concrete_prototype import ConcretePrototype
from client import Client

prototype = ConcretePrototype("Original State")

clone1, clone2 = Client.demonstrate(prototype)

print(prototype.state)
print(clone1.state)
print(clone2.state)
```

Output

```
Original State
State A
State B
```

---

## Variable Names

I also recommend staying close to the book:

* `Prototype`
* `ConcretePrototype`
* `Client`
* `prototype`
* `clone1`
* `clone2`
* `state`

These names immediately match the UML and make it easy for viewers to compare the code with the diagram.

---

## One Improvement for Python

The GoF book uses generic names because it teaches concepts. For your videos, I suggest adding a **second example** after the canonical one.

1. **GoF Example** (faithful to the UML)

   * `Prototype`
   * `ConcretePrototype`
   * `Client`
   * `clone()`

2. **Real-world Python Example**

   * `Character`
   * `Enemy`
   * `Document`
   * `Configuration`
   * `VideoMetadata`
   * etc.

This mirrors the teaching style you've been developing:

* **What** – show the canonical GoF implementation.
* **Why** – explain the problem it solves.
* **Code** – first the book version, then a practical Python example.
* **SWOT** – discuss the strengths and tradeoffs.

I think this will make your Python series feel consistent with your C++, Java, C#, PHP, JavaScript, and other language videos while still showing Pythonic practices where appropriate.

Going forward, I'll keep the **book's UML naming and class structure as the default** unless Python conventions require a small adaptation (for example, using the `copy` module for cloning or the `abc` module for abstract classes). This should give your viewers a one-to-one mapping between the GoF UML and the Python implementation.


Copyright © TheRayCode
