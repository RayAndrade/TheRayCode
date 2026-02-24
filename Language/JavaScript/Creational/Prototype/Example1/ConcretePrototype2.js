const Prototype = require('./Prototype');

// Another concrete implementation of Prototype
class ConcretePrototype2 extends Prototype {
    constructor(id) {
        super();
        this.id = id;
    }

    clone() {
        return new ConcretePrototype2(this.id);
    }

    toString() {
        return `ConcretePrototype2 with id: ${this.id}`;
    }
}
module.exports = ConcretePrototype2;