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
