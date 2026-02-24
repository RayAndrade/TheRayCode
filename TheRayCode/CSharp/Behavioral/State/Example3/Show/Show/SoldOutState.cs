using System;

namespace Show
{
    public class SoldOutState: IState
    {
        private GumballMachine _gumballMachine;

        public SoldOutState(GumballMachine gumballMachine)
        {
            _gumballMachine = gumballMachine;
        }

        public void InsertQuarter() => Console.WriteLine("You can't insert a quarter, the machine is sold out.");
        public void EjectQuarter() => Console.WriteLine("You can't eject, you haven't inserted a quarter yet.");
        public void TurnCrank() => Console.WriteLine("You turned, but there are no gumballs.");

    }
}