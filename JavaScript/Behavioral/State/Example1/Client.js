// Client.js

// Client sets up context and triggers requests
class Client {
    static run() {
        const Context = require('./Context');
        const ConcreteStateA = require('./ConcreteStateA');

        // start with ConcreteStateA
        const context = new Context(new ConcreteStateA());

        // simulate requests
        context.request(); // handled by A, switches to B
        context.request(); // handled by B, switches to A
        context.request(); // handled by A again
    }
}

module.exports = Client;
