// Handler.js

// Handler is the base class for handling requests
class Handler {
    constructor() {
        this.successor = null; // next handler in the chain
    }

    // sets the next handler in the chain
    setSuccessor(successor) {
        this.successor = successor;
    }

    // defines the handling interface to override
    handleRequest(request) {
        throw new Error("handleRequest() must be implemented by subclasses.");
    }
}

module.exports = Handler;
