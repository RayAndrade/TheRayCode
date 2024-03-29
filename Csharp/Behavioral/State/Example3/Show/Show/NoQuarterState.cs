using System;

namespace Show
{
    public class NoQuarterState : IState
    {
        private GumballMachine _gumballMachine;

        public NoQuarterState(GumballMachine gumballMachine)
        {
            _gumballMachine = gumballMachine;
        }

        public void InsertQuarter()
        {
            Console.WriteLine("You inserted a quarter.");
            _gumballMachine.SetState(_gumballMachine.HasQuarterState);
        }
        public void EjectQuarter() => Console.WriteLine("You haven't inserted a quarter.");
        public void TurnCrank() => Console.WriteLine("You turned, but there's no quarter.");

    }
}