class Client {
    constructor(factory) {
        this.productA = factory.createProductA();
        this.productB = factory.createProductB();
    }

    run() {
        console.log(this.productB.usefulFunctionB());
        console.log(this.productB.anotherUsefulFunctionB(this.productA));
    }
}
module.exports = Client;