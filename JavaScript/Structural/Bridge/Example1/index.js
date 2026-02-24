// index.js

import { ConcreteImplementorA } from './ConcreteImplementorA.js';
import { ConcreteImplementorB } from './ConcreteImplementorB.js';

import { Abstraction } from './Abstraction.js';
import { RefinedAbstraction } from './RefinedAbstraction.js';

const implementorA = new ConcreteImplementorA();

const abstractionA = new Abstraction(implementorA);
abstractionA.operation();

const implementorB = new ConcreteImplementorB();

const abstractionB = new RefinedAbstraction(implementorB);
abstractionB.operation();
