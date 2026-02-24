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
