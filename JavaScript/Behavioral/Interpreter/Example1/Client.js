// Client.js

// Client builds and runs the grammar tree
class Client {
    static run() {
        const TerminalExpression = require('./TerminalExpression');
        const NonterminalExpression = require('./NonterminalExpression');
        const Context = require('./Context');

        // define a simple grammar: look for 'hello' AND 'world'
        const hello = new TerminalExpression("hello");
        const world = new TerminalExpression("world");

        const helloAndWorld = new NonterminalExpression(hello, world);

        // test sentences
        const context1 = new Context("hello world from ObjectVille");
        const context2 = new Context("goodbye world");

        console.log(`Test 1: ${helloAndWorld.interpret(context1.getInput())}`); // true
        console.log(`Test 2: ${helloAndWorld.interpret(context2.getInput())}`); // false
    }
}

module.exports = Client;
