const AbstractProductB = require('./AbstractProductB');

class ProductB2 extends AbstractProductB {
    usefulFunctionB() {
        return 'ProductB2: The result of the product B2.';
    }
    anotherUsefulFunctionB(collaborator) {
        return `ProductB2: Collaborating with (${collaborator.usefulFunctionA()})`;
    }
}
module.exports = ProductB2;