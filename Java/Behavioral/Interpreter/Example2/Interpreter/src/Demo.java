public class Demo {
    public static void main(String[] args) {
        ColorExpression red = new BaseColorExpression("Red");
        ColorExpression blue = new BaseColorExpression("Blue");

        ColorExpression purple = new MixColorExpression(red, blue);
        System.out.println(purple.interpret()); // Outputs: Mix of Red and Blue
    }
}
