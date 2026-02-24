const Prototype = require('./Prototype');

// A concrete implementation of Prototype that supports cloning
class ConcretePrototype1 extends Prototype {
    constructor(name) {
        super();
        this.name = name;
    }

    // Returns a new instance with copied values
    clone() {
        return new ConcretePrototype1(this.name);
    }

    toString() {
        return `ConcretePrototype1 with name: ${this.name}`;
    }
}
module.exports = ConcretePrototype1;