// Client.js

// Client uses Components without knowing if they're Leaves or Composites
class Client {
    static execute(component) {
        console.log(component.operation());
    }
}

module.exports = Client;
