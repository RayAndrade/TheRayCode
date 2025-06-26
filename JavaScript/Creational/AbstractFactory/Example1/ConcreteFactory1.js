const AbstractFactory = require('./AbstractFactory');
const ProductA1 = require('./ProductA1');
const ProductB1 = require('./ProductB1');

class ConcreteFactory1 extends AbstractFactory {
    createProductA() {
        return new ProductA1();
    }
    createProductB() {
        return new ProductB1();
    }
}
module.exports = ConcreteFactory1;