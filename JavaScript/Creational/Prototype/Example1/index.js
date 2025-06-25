const ConcretePrototype1 = require('./ConcretePrototype1');
const ConcretePrototype2 = require('./ConcretePrototype2');
const Client = require('./Client');

// Create prototype instances
const prototype1 = new ConcretePrototype1("Original One");
const prototype2 = new ConcretePrototype2(42);

// Use Client to clone them
const client1 = new Client(prototype1);
const client2 = new Client(prototype2);

const clone1 = client1.makeCopy();
const clone2 = client2.makeCopy();

// Display results
console.log(prototype1.toString());
console.log(clone1.toString());

console.log(prototype2.toString());
console.log(clone2.toString());
