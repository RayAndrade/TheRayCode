import { Abstraction } from './Abstraction.js';

export class RefinedAbstraction extends Abstraction {
    operation() {
        console.log("RefinedAbstraction: Extended behavior before delegation.");
        this.implementor.operationImpl();
    }
}