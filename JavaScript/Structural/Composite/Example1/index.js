// index.js

const Composite = require('./Composite');
const Leaf = require('./Leaf');
const Client = require('./Client');

// Create a tree structure
const root = new Composite("root");

// Add some leaves to root
const leaf1 = new Leaf("A");
const leaf2 = new Leaf("B");

root.add(leaf1);
root.add(leaf2);

// Add a composite child with its own leaves
const branch = new Composite("branch");
branch.add(new Leaf("C1"));
branch.add(new Leaf("C2"));

// Add branch to root
root.add(branch);

// run the client
Client.execute(root);
