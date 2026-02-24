const AbstractProductB = require('./AbstractProductB');

class ProductB1 extends AbstractProductB {
    usefulFunctionB() {
        return 'ProductB1: The result of the product B1.';
    }
    anotherUsefulFunctionB(collaborator) {
        return `ProductB1: Collaborating with (${collaborator.usefulFunctionA()})`;
    }
}
module.exports = ProductB1;