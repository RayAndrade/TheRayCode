using System.Text;

namespace Show
{
    public class CountSheepExpression: IExpression
    {
        private int number;

        public CountSheepExpression(int number)
        {
            this.number = number;
        }
        
        public string Interpret()
        {
            var result = new StringBuilder();
            for (int i = 0; i < number; i++)
            {
                result.Append(new SheepExpression().Interpret());
            }
            return result.ToString();
        }
    }
}