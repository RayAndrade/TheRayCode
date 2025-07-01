// ConcreteDecoratorB.js

const Decorator = require('./Decorator');

// ConcreteDecoratorB adds its own behavior
class ConcreteDecoratorB extends Decorator {
    operation() {
        // wrap with even more behavior
        return `ConcreteDecoratorB(${super.operation()})`;
    }
}

module.exports = ConcreteDecoratorB;