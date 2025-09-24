// Context.js

// Context maintains a reference to the current state
class Context {
    constructor(state) {
        this.state = state; // start with an initial state
    }

    setState(state) {
        this.state = state; // update the current state
        console.log(`Context: changed state to ${state.constructor.name}`);
    }

    request() {
        this.state.handle(this); // delegate to the current state's handle
    }
}

module.exports = Context;
