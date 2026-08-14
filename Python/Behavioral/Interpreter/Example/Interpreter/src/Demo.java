public class Demo {

    public static void main(String[] args) {
        Expression addExpression = new AddExpression(new NumberExpression(5), new NumberExpression(3));
        System.out.println("Result of 5 + 3: " + addExpression.interpret());

        Expression subtractExpression = new SubtractExpression(new NumberExpression(5), new NumberExpression(3));
        System.out.println("Result of 5 - 3: " + subtractExpression.interpret());
    }
}
