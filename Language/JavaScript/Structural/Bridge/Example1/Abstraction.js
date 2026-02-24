export class Abstraction {
    constructor(implementor) {
        this.implementor = implementor;
    }

    operation() {
        console.log("Abstraction: Delegating to implementor...");
        this.implementor.operationImpl();
    }
}