using System;

namespace TheRayCode.DesignPatterns.State.Conceptual
{
    class StateA : State
    {
        public override void Handle1()
        {
            Console.WriteLine("StateA handles request1.");
            Console.WriteLine("StateA wants to change the state of the context.");
            this._context.TransitionTo(new StateB());
        }

        public override void Handle2()
        {
            Console.WriteLine("StateA handles request2.");
        }
    }
}