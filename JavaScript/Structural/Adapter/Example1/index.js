// index.js

const Adapter = require('./Adapter');
const Client = require('./Client');

const adapter = new Adapter(); // create the Adapter

Client.execute(adapter); // call Client with the adapter
