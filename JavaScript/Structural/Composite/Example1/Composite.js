// Composite.js

const Component = require('./Component');

// Composite: can have children Components, and treats them uniformly
class Composite extends Component {
    constructor(name) {
        super();
        this.name = name; // name for the composite
        this.children = []; // holds children
    }

    add(component) {
        this.children.push(component); // add a child component
    }

    remove(component) {
        const index = this.children.indexOf(component);
        if (index !== -1) {
            this.children.splice(index, 1); // remove the child
        }
    }

    getChild(index) {
        return this.children[index]; // return child by index
    }

    operation() {
        // call operation on each child
        const results = this.children.map(child => child.operation());
        return `Composite(${this.name}) [ ${results.join(" | ")} ]`;
    }
}

module.exports = Composite;
