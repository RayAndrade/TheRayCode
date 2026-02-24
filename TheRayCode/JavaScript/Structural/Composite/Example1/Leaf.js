// Leaf.js

const Component = require('./Component');

// Leaf: represents individual objects, no children
class Leaf extends Component {
    constructor(name) {
        super();
        this.name = name; // store the name of the leaf
    }

    operation() {
        return `Leaf: ${this.name}`; // returns its name
    }
}

module.exports = Leaf;
