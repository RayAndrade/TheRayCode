# TheRayCode
## Memento pattern java

Let’s build out the **Memento Pattern**, a behavioral pattern explained in the GoF book on pages 283–292, with its UML on page 285.

✅ GoF participants you will see:

* **Memento** (stores the internal state snapshot)
* **Originator** (creates/restores Mementos)
* **Caretaker** (manages Mementos but does not look inside)
* **Client** (coordinates the demo)

---

**As you requested**, I will:
✅ explain each class *outside* the code block
✅ include fully commented code inside triple-backtick blocks
✅ place each class in its own `.js` file
✅ add an `index.js` to run the demo
✅ structure it in a GitHub-ready style for WebStorm on Linux

---

# 🧩 Class-by-Class Explanation

---

## 🧩 `Memento.js`

**Purpose**
Stores a snapshot of the internal state of the `Originator`. This is a simple, immutable object that no one should modify after creation.

```javascript
// Memento.js

// Memento stores the state of the Originator
class Memento {
    constructor(state) {
        this.state = state; // capture the state
    }

    getState() {
        return this.state; // provide read-only access
    }
}

module.exports = Memento;
```

---

## 🧩 `Originator.js`

**Purpose**
Holds the current state of the object and can save that state to a Memento, or restore its state from a Memento.

```javascript
// Originator.js

const Memento = require('./Memento');

// Originator creates and restores mementos
class Originator {
    constructor() {
        this.state = ""; // current state
    }

    setState(state) {
        this.state = state; // change internal state
        console.log(`Originator: setting state to "${state}"`);
    }

    getState() {
        return this.state; // read current state
    }

    save() {
        console.log(`Originator: saving to memento`);
        return new Memento(this.state); // create a memento
    }

    restore(memento) {
        this.state = memento.getState(); // restore from memento
        console.log(`Originator: state restored to "${this.state}"`);
    }
}

module.exports = Originator;
```

---

## 🧩 `Caretaker.js`

**Purpose**
Keeps track of saved mementos, but does not operate on their internals.

```javascript
// Caretaker.js

// Caretaker manages mementos but does not modify them
class Caretaker {
    constructor() {
        this.mementos = []; // collection of saved mementos
    }

    addMemento(memento) {
        this.mementos.push(memento); // store a memento
    }

    getMemento(index) {
        return this.mementos[index]; // retrieve a memento by index
    }
}

module.exports = Caretaker;
```

---

## 👤 `Client.js`

**Purpose**
Coordinates the scenario: changes state, saves it to mementos, and then restores previous states.

```javascript
// Client.js

// Client sets up the scenario
class Client {
    static run() {
        const Originator = require('./Originator');
        const Caretaker = require('./Caretaker');

        const originator = new Originator();
        const caretaker = new Caretaker();

        // change and save state
        originator.setState("State A");
        caretaker.addMemento(originator.save());

        originator.setState("State B");
        caretaker.addMemento(originator.save());

        originator.setState("State C");

        // restore to previous state
        originator.restore(caretaker.getMemento(0)); // back to A
        originator.restore(caretaker.getMemento(1)); // back to B
    }
}

module.exports = Client;
```

---

## 🚀 `index.js`

**Purpose**
Runs the demonstration.

```javascript
// index.js

const Client = require('./Client');

// run the Memento pattern demo
Client.run();
```

---

# ✅ Expected Output

```bash
Originator: setting state to "State A"
Originator: saving to memento
Originator: setting state to "State B"
Originator: saving to memento
Originator: setting state to "State C"
Originator: state restored to "State A"
Originator: state restored to "State B"
```

---

# 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software* (Gamma et al)
* Memento Pattern, pages 283–292
* UML page 285
* Participants:

  * Memento
  * Originator
  * Caretaker
  * Client

---

# 🧠 Teaching Notes

✅ Emphasize that **Caretaker** never looks inside the Memento (encapsulation)
✅ Show how this pattern helps **undo/redo** functionality
✅ Extend this with timestamped mementos or multiple caretakers




[Wikipedia](https://en.wikipedia.org/wiki/Memento_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
