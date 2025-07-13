// Purpose: Interface for implementation classes. Defines a method that must be implemented.

export class Implementor {
    // This method is intended to be overridden by subclasses
    operationImpl() {
        throw new Error("operationImpl() must be implemented by subclass.");
    }
}
