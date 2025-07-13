// Purpose: Another implementation of Implementor with a different behavior.

import { Implementor } from './Implementor.js';

export class ConcreteImplementorB extends Implementor {
    // Implements the operation with behavior specific to B
    operationImpl() {
        console.log("ConcreteImplementorB: operationImpl() is called.");
    }
}
