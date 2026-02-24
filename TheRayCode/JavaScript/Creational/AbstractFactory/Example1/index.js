const ConcreteFactory1 = require('./ConcreteFactory1');
const ConcreteFactory2 = require('./ConcreteFactory2');
const Client = require('./Client');

console.log('Client: Testing client code with the first factory type...');
const client1 = new Client(new ConcreteFactory1());
client1.run();

console.log('\nClient: Testing the same client code with the second factory type...');
const client2 = new Client(new ConcreteFactory2());
client2.run();
