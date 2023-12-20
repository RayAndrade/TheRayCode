namespace Show
{
    public class SadExpression: Expression
    {
        public override string Interpret(Context context)
        {
            return context.Input.Replace("sad", "😢");
        }
    }
}