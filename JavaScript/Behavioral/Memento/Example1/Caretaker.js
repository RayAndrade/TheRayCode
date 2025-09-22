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
