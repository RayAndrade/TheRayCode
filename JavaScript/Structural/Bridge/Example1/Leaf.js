const Component = require('./Component');

class Leaf extends Component {
    constructor(name) {
        super();
        this.name = name;
    }
    operation() {
        return `Leaf: ${this.name}`;
    }
}
module.exports = Leaf;