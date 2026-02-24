// ConcreteHandler3.js

const Handler = require('./Handler');

// ConcreteHandler3: handles requests in its range or ends the chain
class ConcreteHandler3 extends Handler {
    handleRequest(request) {
        // check if request is in range
        if (request >= 20 && request < 30) {
            console.log(`ConcreteHandler3 handled request ${request}`);
        } else {
            console.log(`ConcreteHandler3: no handler for ${request}`);
        }
    }
}

module.exports = ConcreteHandler3;