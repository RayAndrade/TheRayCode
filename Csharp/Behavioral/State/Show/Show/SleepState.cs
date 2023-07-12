using System;

namespace Show
{
    public class SleepState: IState
    {
        public void Handle(Context context)
        {
            Console.WriteLine("Going to Sleep");
            context.SetState(this);
        }
        
        public override string ToString()
        {
            return "Sleeping";
        }
    }
}