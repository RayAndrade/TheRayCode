class AbstractProductB {
    usefulFunctionB() {
        throw new Error("usefulFunctionB() must be implemented.");
    }
    anotherUsefulFunctionB(collaborator) {
        throw new Error("anotherUsefulFunctionB() must be implemented.");
    }
}
module.exports = AbstractProductB;