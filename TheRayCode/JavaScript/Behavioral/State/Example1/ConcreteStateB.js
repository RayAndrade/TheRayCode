// ConcreteStateB.js

const State = require('./State');

// ConcreteStateB handles the request
class ConcreteStateB extends State {
    handle(context) {
        console.log("ConcreteStateB handles request, switching to ConcreteStateA");
        context.setState(new (require('./ConcreteStateA'))()); // switch to A
    }
}

module.exports = ConcreteStateB;
