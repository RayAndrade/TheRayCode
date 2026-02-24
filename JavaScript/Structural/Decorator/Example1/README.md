[Top](../README.md)

✅ Participants from the GoF UML and text:

* **Component** (abstract interface)
* **ConcreteComponent** (the base class being decorated)
* **Decorator** (abstract base for decorators, holds a reference to a component)
* **ConcreteDecorator** (adds behavior dynamically)
* **Client** (uses the decorated objects)

---

**As you requested, I will:**

* explain each class outside the code block
* put code inside triple-backtick fenced blocks
* comment every line
* put each class in its own `.js` module
* add a simple `index.js` demo
* structure it for WebStorm on Linux/Ubuntu
* fully ready to paste into GitHub

---

# 🧩 Class-by-Class Explanation

---

## 🎯 `Component.js`

**Purpose**
This defines the interface for objects that can have responsibilities added to them dynamically. Both `ConcreteComponent` and all decorators must implement this interface.

```javascript
// Component.js

// Component defines the interface that can have dynamic behavior added to it
class Component {
    operation() {
        throw new Error("operation() must be implemented by subclasses");
    }
}

module.exports = Component;
```

---

## ⚙️ `ConcreteComponent.js`

**Purpose**
This is the object that gets decorated. It implements the `Component` interface directly.

```javascript
// ConcreteComponent.js

const Component = require('./Component');

// ConcreteComponent is the core object being decorated
class ConcreteComponent extends Component {
    operation() {
        return "ConcreteComponent"; // its normal behavior
    }
}

module.exports = ConcreteComponent;
```

---

## 🎀 `Decorator.js`

**Purpose**
Defines the base class for all decorators. It holds a reference to a `Component` and forwards operations to it.

```javascript
// Decorator.js

const Component = require('./Component');

// Decorator wraps a component to add behavior dynamically
class Decorator extends Component {
    constructor(component) {
        super();
        this.component = component; // reference to the component being wrapped
    }

    operation() {
        // delegates to the wrapped component by default
        return this.component.operation();
    }
}

module.exports = Decorator;
```

---

## 🎨 `ConcreteDecoratorA.js`

**Purpose**
A concrete decorator that adds extra behavior before or after delegating to the component.

```javascript
// ConcreteDecoratorA.js

const Decorator = require('./Decorator');

// ConcreteDecoratorA adds behavior to the wrapped component
class ConcreteDecoratorA extends Decorator {
    operation() {
        // add extra behavior
        return `ConcreteDecoratorA(${super.operation()})`;
    }
}

module.exports = ConcreteDecoratorA;
```

---

## 🎨 `ConcreteDecoratorB.js`

**Purpose**
Another concrete decorator that could add further behavior, showing how multiple decorators can be stacked.

```javascript
// ConcreteDecoratorB.js

const Decorator = require('./Decorator');

// ConcreteDecoratorB adds its own behavior
class ConcreteDecoratorB extends Decorator {
    operation() {
        // wrap with even more behavior
        return `ConcreteDecoratorB(${super.operation()})`;
    }
}

module.exports = ConcreteDecoratorB;
```

---

## 👤 `Client.js`

**Purpose**
Uses components through the `Component` interface. The client is unaware of whether the object is decorated or not.

```javascript
// Client.js

// Client uses the Component interface
class Client {
    static execute(component) {
        console.log(component.operation());
    }
}

module.exports = Client;
```

---

## 🚀 `index.js`

**Purpose**
Demo of how to compose decorators dynamically around a base object.

```javascript
// index.js

const ConcreteComponent = require('./ConcreteComponent');
const ConcreteDecoratorA = require('./ConcreteDecoratorA');
const ConcreteDecoratorB = require('./ConcreteDecoratorB');
const Client = require('./Client');

// create the base object
const simple = new ConcreteComponent();

// decorate it with ConcreteDecoratorA
const decoratorA = new ConcreteDecoratorA(simple);

// decorate that with ConcreteDecoratorB
const decoratorB = new ConcreteDecoratorB(decoratorA);

// run the client
Client.execute(simple);       // ConcreteComponent
Client.execute(decoratorA);   // ConcreteDecoratorA(ConcreteComponent)
Client.execute(decoratorB);   // ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```

---

# ✅ Expected Output

```bash
ConcreteComponent
ConcreteDecoratorA(ConcreteComponent)
ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```

---

# 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software* (GoF)
* Decorator Pattern, pages 175–184
* Participants:

  * **Component**
  * **ConcreteComponent**
  * **Decorator**
  * **ConcreteDecorator**
  * **Client**

---

# 🧠 Teaching Notes

✅ Show how decorators can be **stacked** to layer behaviors
✅ Discuss trade-offs between decorators vs. inheritance
✅ Practice refactoring duplicate subclasses into decorator chains

