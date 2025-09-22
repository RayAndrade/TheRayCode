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
