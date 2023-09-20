public class SubtractExpression implements Expression {
    private Expression firstExpression;
    private Expression secondExpression;

    public SubtractExpression(Expression firstExpression, Expression secondExpression) {
        this.firstExpression = firstExpression;
        this.secondExpression = secondExpression;
    }

    @Override
    public int interpret() {
        return this.firstExpression.interpret() - this.secondExpression.interpret();
    }
}
