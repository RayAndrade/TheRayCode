using System;

namespace TheRayCode.Mediator
{
    class ConcreateColleage2 : BaseComponent
    {
        public void DoC()
        {
            Console.WriteLine("Colleage 2 does C.");

            this._mediator.Notify(this, "C");
        }

        public void DoD()
        {
            Console.WriteLine("Colleage 2 does D.");

            this._mediator.Notify(this, "D");
        }
    }
}