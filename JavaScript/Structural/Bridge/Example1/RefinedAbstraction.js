// RefinedAbstraction.js
import { Abstraction } from './Abstraction.js';

export class RefinedAbstraction extends Abstraction {
    operation() {
        console.log("RefinedAbstraction: operation() is delegating to implementor...");
        this.implementor.operationImpl();
    }
}
