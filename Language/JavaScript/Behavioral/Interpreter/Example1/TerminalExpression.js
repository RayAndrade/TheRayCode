// TerminalExpression.js

const AbstractExpression = require('./AbstractExpression');

// TerminalExpression: implements an interpret method for terminal symbols
class TerminalExpression extends AbstractExpression {
    constructor(data) {
        super();
        this.data = data; // store terminal symbol
    }

    interpret(context) {
        // check if context contains the terminal data
        return context.includes(this.data);
    }
}

module.exports = TerminalExpression;
