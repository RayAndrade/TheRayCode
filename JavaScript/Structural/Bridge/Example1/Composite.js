const Component = require('./Component');

class Composite extends Component {
    constructor(name) {
        super();
        this.name = name;
        this.children = [];
    }
    add(component) {
        this.children.push(component);
    }
    remove(component) {
        const index = this.children.indexOf(component);
        if (index !== -1) {
            this.children.splice(index, 1);
        }
    }
    getChild(index) {
        return this.children[index];
    }
    operation() {
        const results = this.children.map(child => child.operation());
        return `Composite(${this.name}) [ ${results.join(" | ")} ]`;
    }
}
module.exports = Composite;