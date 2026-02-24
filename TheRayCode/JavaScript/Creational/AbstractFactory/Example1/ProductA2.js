const AbstractProductA = require('./AbstractProductA');

class ProductA2 extends AbstractProductA {
    usefulFunctionA() {
        return 'ProductA2: The result of the product A2.';
    }
}
module.exports = ProductA2;