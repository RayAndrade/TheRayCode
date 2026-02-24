const AbstractFactory = require('./AbstractFactory');
const ProductA2 = require('./ProductA2');
const ProductB2 = require('./ProductB2');

class ConcreteFactory2 extends AbstractFactory {
    createProductA() {
        return new ProductA2();
    }
    createProductB() {
        return new ProductB2();
    }
}
module.exports = ConcreteFactory2;