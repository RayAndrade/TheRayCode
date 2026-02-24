using System;

namespace Show
{
    public class HasQuarterState: IState
    {
        private GumballMachine _gumballMachine;

        public HasQuarterState(GumballMachine gumballMachine)
        {
            _gumballMachine = gumballMachine;
        }
        public void InsertQuarter() => Console.WriteLine("You can't insert another quarter.");


        public void EjectQuarter()
        {
            Console.WriteLine("Quarter returned.");
            _gumballMachine.SetState(_gumballMachine.NoQuarterState);
        }

        public void TurnCrank()
        {
            Console.WriteLine("You turned...");
            _gumballMachine.SetState(_gumballMachine.SoldOutState);
            _gumballMachine.ReleaseBall();
        }
    }
}