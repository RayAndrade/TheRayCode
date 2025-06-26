const Builder = require('./Builder');
const Product = require('./Product');

class ConcreteBuilder extends Builder {
    constructor() {
        super();
        this.product = new Product();
    }
    buildPartA() {
        this.product.add("PartA");
    }
    buildPartB() {
        this.product.add("PartB");
    }
    getResult() {
        return this.product;
    }
}
module.exports = ConcreteBuilder;