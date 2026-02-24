// NonterminalExpression.js

const AbstractExpression = require('./AbstractExpression');

// NonterminalExpression: combines two expressions
class NonterminalExpression extends AbstractExpression {
    constructor(expr1, expr2) {
        super();
        this.expr1 = expr1; // left side
        this.expr2 = expr2; // right side
    }

    interpret(context) {
        // for simplicity, logical AND of both expressions
        return this.expr1.interpret(context) && this.expr2.interpret(context);
    }
}

module.exports = NonterminalExpression;
