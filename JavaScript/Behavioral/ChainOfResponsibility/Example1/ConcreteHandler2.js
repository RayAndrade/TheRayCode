// ConcreteHandler2.js

const Handler = require('./Handler');

// ConcreteHandler2: handles requests in its range or forwards
class ConcreteHandler2 extends Handler {
    handleRequest(request) {
        // check if request is in range
        if (request >= 10 && request < 20) {
            console.log(`ConcreteHandler2 handled request ${request}`);
        } else if (this.successor) {
            console.log(`ConcreteHandler2 forwards ${request} to successor`);
            this.successor.handleRequest(request);
        }
    }
}

module.exports = ConcreteHandler2;