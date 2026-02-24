namespace Show
{
    public class SmileExpression: AbstractExpression
    {
        public override string Interpret(EmojiContext context)
        {
            if (context.EmojiText.Contains(":)"))
                return "Happy";
            return "";
        }
    }
}