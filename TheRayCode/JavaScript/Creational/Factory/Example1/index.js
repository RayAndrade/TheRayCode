// index.js
// Purpose: Demo of Factory Method pattern

import ConcreteCreator from './ConcreteCreator.js';

const creator = new ConcreteCreator();
const result = creator.someOperation();

console.log(result);
// Expected: "Creator: Working with Result from ConcreteProduct"
