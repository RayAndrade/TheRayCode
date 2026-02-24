const ConcreteBuilder = require('./ConcreteBuilder');
const Director = require('./Director');

const builder = new ConcreteBuilder();
const director = new Director();

director.construct(builder);

const product = builder.getResult();
product.show();