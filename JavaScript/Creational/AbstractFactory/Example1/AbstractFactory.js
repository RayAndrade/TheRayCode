class AbstractFactory {
    createProductA() {
        throw new Error("createProductA() must be implemented.");
    }
    createProductB() {
        throw new Error("createProductB() must be implemented.");
    }
}
module.exports = AbstractFactory;