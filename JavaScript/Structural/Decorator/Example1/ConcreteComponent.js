// ConcreteComponent.js

const Component = require('./Component');

// ConcreteComponent is the core object being decorated
class ConcreteComponent extends Component {
    operation() {
        return "ConcreteComponent"; // its normal behavior
    }
}

module.exports = ConcreteComponent;