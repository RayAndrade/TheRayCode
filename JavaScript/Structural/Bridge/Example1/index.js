const Composite = require('./Composite');
const Leaf = require('./Leaf');
const Client = require('./Client');

const root = new Composite("root");

const leaf1 = new Leaf("A");
const leaf2 = new Leaf("B");

root.add(leaf1);
root.add(leaf2);

const branch = new Composite("branch");
branch.add(new Leaf("C1"));
branch.add(new Leaf("C2"));

root.add(branch);

Client.execute(root);