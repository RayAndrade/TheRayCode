using System;

namespace TheRayCode.Mediator
{
    class ConcreteMediator : Mediator
    {
        private ConcreateColleage1 _concreateColleage1;

        private ConcreateColleage2 _concreateColleage2;

        public ConcreteMediator(ConcreateColleage1 concreateColleage1, ConcreateColleage2 concreateColleage2)
        {
            this._concreateColleage1 = concreateColleage1;
            this._concreateColleage1.SetMediator(this);
            this._concreateColleage2 = concreateColleage2;
            this._concreateColleage2.SetMediator(this);
        } 

        public void Notify(object sender, string ev)
        {
            if (ev == "A")
            {
                Console.WriteLine("Mediator reacts on A and triggers folowing operations:");
                this._concreateColleage2.DoC();
            }
            if (ev == "D")
            {
                Console.WriteLine("Mediator reacts on D and triggers following operations:");
                this._concreateColleage1.DoB();
                this._concreateColleage2.DoC();
            }
        }
    }

}