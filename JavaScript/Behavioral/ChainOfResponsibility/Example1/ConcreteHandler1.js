// ConcreteHandler1.js

const Handler = require('./Handler');

// ConcreteHandler1: handles requests in its range or forwards
class ConcreteHandler1 extends Handler {
    handleRequest(request) {
        // check if request is in range
        if (request >= 0 && request < 10) {
            console.log(`ConcreteHandler1 handled request ${request}`);
        } else if (this.successor) {
            console.log(`ConcreteHandler1 forwards ${request} to successor`);
            this.successor.handleRequest(request);
        }
    }
}

module.exports = ConcreteHandler1;