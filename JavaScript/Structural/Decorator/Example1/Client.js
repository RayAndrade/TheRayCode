// Client.js

// Client uses the Component interface
class Client {
    static execute(component) {
        console.log(component.operation());
    }
}

module.exports = Client;