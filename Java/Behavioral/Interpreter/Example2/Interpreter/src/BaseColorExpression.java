public class BaseColorExpression implements ColorExpression {

    private String color;

    public BaseColorExpression(String color) {
        this.color = color;
    }

    @Override
    public String interpret() {
        return this.color;
    }
}
