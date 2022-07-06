using System;

namespace TheRayCode.Mediator
{
    class ConcreateColleage1 : BaseComponent
    {
        public void DoA()
        {
            Console.WriteLine("Colleage 1 does A.");

            this._mediator.Notify(this, "A");
        }

        public void DoB()
        {
            Console.WriteLine("Colleage 1 does B.");

            this._mediator.Notify(this, "B");
        }
    }
}