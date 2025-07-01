// ConcreteDecoratorA.js

const Decorator = require('./Decorator');

// ConcreteDecoratorA adds behavior to the wrapped component
class ConcreteDecoratorA extends Decorator {
    operation() {
        // add extra behavior
        return `ConcreteDecoratorA(${super.operation()})`;
    }
}

module.exports = ConcreteDecoratorA;