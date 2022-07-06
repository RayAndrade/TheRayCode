using System;

namespace TheRayCode.DesignPatterns.State.Conceptual
{
    class StateB : State
    {
        public override void Handle1()
        {
            Console.Write("StateB handles request1.");
        }

        public override void Handle2()
        {
            Console.WriteLine("StateB handles request2.");
            Console.WriteLine("StateB wants to change the state of the context.");
            this._context.TransitionTo(new StateA());
        }
    }
}