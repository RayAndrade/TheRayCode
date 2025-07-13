// Purpose: Defines the interface for the abstraction part of the Bridge.
// Maintains a reference to an Implementor object and delegates operations to it.

export class Abstraction {
    /**
     * @param {Implementor} implementor - A concrete implementation object.
     */
    constructor(implementor) {
        this.implementor = implementor; // Store the bridge to the implementation
    }

    // Defines the abstract method that uses the implementor
    operation() {
        // Delegates to the implementor’s method
        this.implementor.operationImpl();
    }
}
