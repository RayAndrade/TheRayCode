const AbstractProductA = require('./AbstractProductA');

class ProductA1 extends AbstractProductA {
    usefulFunctionA() {
        return 'ProductA1: The result of the product A1.';
    }
}
module.exports = ProductA1;