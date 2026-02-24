namespace Interpreter
{
    public class AnimalExpression: IExpression
    {
        private readonly string _animal;

        public AnimalExpression(string animal)
        {
            _animal = animal;
        }

        public void Interpret(Context context)
        {
            context.Output = _animal;
        }
    }
}