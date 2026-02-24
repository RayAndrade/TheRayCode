// Client.js

// Client only uses the Facade
class Client {
    static execute(facade) {
        console.log(facade.simpleOperation());
    }
}

module.exports = Client;
