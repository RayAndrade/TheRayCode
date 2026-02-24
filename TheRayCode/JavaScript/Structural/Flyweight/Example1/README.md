
# 🪶 Flyweight Design Pattern in JavaScript

This project demonstrates the **Flyweight Pattern** in JavaScript, exactly following the class names and participants from the UML on page 206 of *Design Patterns: Elements of Reusable Object-Oriented Software* (GoF).  

The Flyweight pattern reduces memory use by sharing objects that have identical intrinsic state.  

---

## 🧩 Participants

| **Role**                   | **Class**                  | **Description** |
|----------------------------|----------------------------|-----------------|
| Flyweight                  | `Flyweight.js`             | Defines the interface to receive extrinsic state |
| ConcreteFlyweight          | `ConcreteFlyweight.js`     | Stores shared (intrinsic) state and implements the Flyweight interface |
| UnsharedConcreteFlyweight  | `UnsharedConcreteFlyweight.js` | Has unique state, not shared |
| FlyweightFactory           | `FlyweightFactory.js`      | Creates and reuses flyweights |
| Client                     | `Client.js`                | Uses the flyweights through the FlyweightFactory |

---

## 📂 File Structure

```

FlyweightExample/
├── Flyweight.js
├── ConcreteFlyweight.js
├── UnsharedConcreteFlyweight.js
├── FlyweightFactory.js
├── Client.js
└── index.js

````

---

# 🧩 Class-by-Class Explanation

---

## 🪶 `Flyweight.js`

**Purpose**  
The abstract interface for flyweights, providing a standard operation.

```javascript
// Flyweight.js

class Flyweight {
    operation(extrinsicState) {
        throw new Error("operation() must be implemented.");
    }
}
module.exports = Flyweight;
````

---

## 🪶 `ConcreteFlyweight.js`

**Purpose**
Stores **intrinsic** (shared) state and implements the Flyweight interface.

```javascript
// ConcreteFlyweight.js

const Flyweight = require('./Flyweight');

class ConcreteFlyweight extends Flyweight {
    constructor(sharedState) {
        super();
        this.sharedState = sharedState; // store intrinsic state
    }

    operation(extrinsicState) {
        console.log(
            `ConcreteFlyweight: shared=${this.sharedState}, extrinsic=${extrinsicState}`
        );
    }
}

module.exports = ConcreteFlyweight;
```

---

## 🪶 `UnsharedConcreteFlyweight.js`

**Purpose**
A flyweight object that is **not** shared. Its state is unique to each client.

```javascript
// UnsharedConcreteFlyweight.js

const Flyweight = require('./Flyweight');

class UnsharedConcreteFlyweight extends Flyweight {
    constructor(state) {
        super();
        this.state = state; // unshared
    }

    operation(extrinsicState) {
        console.log(
            `UnsharedConcreteFlyweight: state=${this.state}, extrinsic=${extrinsicState}`
        );
    }
}

module.exports = UnsharedConcreteFlyweight;
```

---

## 🏭 `FlyweightFactory.js`

**Purpose**
Creates and manages flyweights, ensuring that identical intrinsic states are reused rather than duplicated.

```javascript
// FlyweightFactory.js

const ConcreteFlyweight = require('./ConcreteFlyweight');

class FlyweightFactory {
    constructor() {
        this.flyweights = {}; // holds created flyweights
    }

    getFlyweight(sharedState) {
        if (!this.flyweights[sharedState]) {
            this.flyweights[sharedState] = new ConcreteFlyweight(sharedState);
        }
        return this.flyweights[sharedState];
    }

    listFlyweights() {
        console.log(
            `FlyweightFactory: I have ${Object.keys(this.flyweights).length} flyweights`
        );
    }
}

module.exports = FlyweightFactory;
```

---

## 👤 `Client.js`

**Purpose**
Uses the FlyweightFactory to reuse flyweights, and demonstrates using an unshared flyweight as well.

```javascript
// Client.js

const UnsharedConcreteFlyweight = require('./UnsharedConcreteFlyweight');

class Client {
    static run(factory) {
        // get a shared flyweight
        const flyweight1 = factory.getFlyweight("shared");
        flyweight1.operation("context1");

        // reuse same shared flyweight
        const flyweight2 = factory.getFlyweight("shared");
        flyweight2.operation("context2");

        console.log(`Same flyweight? ${flyweight1 === flyweight2}`);

        // unique (unshared) flyweight
        const unshared = new UnsharedConcreteFlyweight("unique");
        unshared.operation("context3");
    }
}

module.exports = Client;
```

---

## 🚀 `index.js`

**Purpose**
Demo runner to launch the flyweight pattern example.

```javascript
// index.js

const FlyweightFactory = require('./FlyweightFactory');
const Client = require('./Client');

const factory = new FlyweightFactory();
Client.run(factory);
```

---

# ✅ How to Run

1. Place all files in the same folder
2. From a terminal:

```bash
node index.js
```

✅ **Expected Output:**

```bash
ConcreteFlyweight: shared=shared, extrinsic=context1
ConcreteFlyweight: shared=shared, extrinsic=context2
Same flyweight? true
UnsharedConcreteFlyweight: state=unique, extrinsic=context3
```

---

# 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software* (Gamma et al)
* Flyweight Pattern, pages 195–206
* UML page 206
* Participants:

  * Flyweight
  * ConcreteFlyweight
  * UnsharedConcreteFlyweight
  * FlyweightFactory
  * Client

---

# 🧠 Teaching Tips

✅ Reinforce **intrinsic** vs **extrinsic** state
✅ Practice measuring performance/memory with thousands of flyweights
✅ Challenge students to adapt this to a GUI element renderer



