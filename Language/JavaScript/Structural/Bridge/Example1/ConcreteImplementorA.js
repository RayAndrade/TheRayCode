import { Implementor } from './Implementor.js';

export class ConcreteImplementorA extends Implementor {
    operationImpl() {
        console.log("ConcreteImplementorA: Doing work A.");
    }
}
