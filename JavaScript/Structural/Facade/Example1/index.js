// index.js

const Facade = require('./Facade');
const Client = require('./Client');

// create the facade
const facade = new Facade();

// run the client
Client.execute(facade);

