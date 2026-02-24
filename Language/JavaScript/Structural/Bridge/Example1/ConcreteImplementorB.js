import { Implementor } from './Implementor.js';

export class ConcreteImplementorB extends Implementor {
    operationImpl() {
        console.log("ConcreteImplementorB: Doing work B.");
    }
}