// ConcreteStateA.js

const State = require('./State');

// ConcreteStateA handles the request
class ConcreteStateA extends State {
    handle(context) {
        console.log("ConcreteStateA handles request, switching to ConcreteStateB");
        context.setState(new (require('./ConcreteStateB'))()); // switch to B
    }
}

module.exports = ConcreteStateA;
