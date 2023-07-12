using System;

namespace Show
{
    public class EatState : IState
    {
        public void Handle(Context context)
        {
            Console.WriteLine("Going to Eat");
            context.SetState(this);
        }
        public override string ToString()
        {
            return "Eating";
        }
    }
}