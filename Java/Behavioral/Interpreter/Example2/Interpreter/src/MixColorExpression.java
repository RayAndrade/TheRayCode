public class MixColorExpression implements ColorExpression {

    private ColorExpression firstColor;
    private ColorExpression secondColor;

    public MixColorExpression(ColorExpression firstColor, ColorExpression secondColor) {
        this.firstColor = firstColor;
        this.secondColor = secondColor;
    }

    @Override
    public String interpret() {
        return "Mix of " + this.firstColor.interpret() + " and " + this.secondColor.interpret();
    }
}
