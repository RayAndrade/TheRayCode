// Context.js

// Context: holds global information about the parse state
class Context {
    constructor(input) {
        this.input = input; // for this example, a string to parse
    }

    getInput() {
        return this.input;
    }
}

module.exports = Context;
