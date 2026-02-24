// Creator.js
// Purpose: Abstract Creator class declaring factoryMethod()

class Creator {
    factoryMethod() {
        throw new Error("Abstract method 'factoryMethod' must be implemented by subclass.");
    }

    someOperation() {
        const product = this.factoryMethod();
        return `Creator: Working with ${product.operation()}`;
    }
}

export default Creator;
