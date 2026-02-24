// AbstractExpression.js

// AbstractExpression: defines an interpret interface
class AbstractExpression {
    interpret(context) {
        throw new Error("interpret() must be implemented in subclasses.");
    }
}

module.exports = AbstractExpression;
