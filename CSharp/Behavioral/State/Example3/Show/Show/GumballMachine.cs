using System;

namespace Show
{
    public class GumballMachine
    {
        public IState HasQuarterState { get; private set; }
        public IState NoQuarterState { get; private set; }
        public IState SoldOutState { get; private set; }

        public IState CurrentState { get; private set; }
        public int Count { get; private set; }

        public GumballMachine(int count)
        {
            HasQuarterState = new HasQuarterState(this);
            NoQuarterState = new NoQuarterState(this);
            SoldOutState = new SoldOutState(this);

            Count = count;
            CurrentState = count > 0 ? NoQuarterState : SoldOutState;
        }

        public void InsertQuarter() => CurrentState.InsertQuarter();
        public void EjectQuarter() => CurrentState.EjectQuarter();
        public void TurnCrank() => CurrentState.TurnCrank();
        public void ReleaseBall()
        {
            if (Count > 0)
            {
                Console.WriteLine("A gumball comes rolling out...");
                Count--;
            }
        }

        public void SetState(IState state) => CurrentState = state;
    }
}