// Purpose: A concrete implementation of the Implementor interface.
// It provides a specific behavior for the `operationImpl()` method.

import { Implementor } from './Implementor.js';

export class ConcreteImplementorA extends Implementor {
    // Implements the operation with behavior specific to A
    operationImpl() {
        console.log("ConcreteImplementorA: operationImpl() is called.");
    }
}
