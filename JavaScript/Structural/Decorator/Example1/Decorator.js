// Decorator.js

const Component = require('./Component');

// Decorator wraps a component to add behavior dynamically
class Decorator extends Component {
    constructor(component) {
        super();
        this.component = component; // reference to the component being wrapped
    }

    operation() {
        // delegates to the wrapped component by default
        return this.component.operation();
    }
}

module.exports = Decorator;