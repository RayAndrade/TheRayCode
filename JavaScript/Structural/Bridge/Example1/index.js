import { ConcreteImplementorA } from './ConcreteImplementorA.js';
import { ConcreteImplementorB } from './ConcreteImplementorB.js';
import { RefinedAbstraction } from './RefinedAbstraction.js';

// Setup and run
const implementorA = new ConcreteImplementorA();
const abstractionA = new RefinedAbstraction(implementorA);

console.log("Calling operation with ConcreteImplementorA:");
abstractionA.operation();

console.log("");

const implementorB = new ConcreteImplementorB();
const abstractionB = new RefinedAbstraction(implementorB);

console.log("Calling operation with ConcreteImplementorB:");
abstractionB.operation();
