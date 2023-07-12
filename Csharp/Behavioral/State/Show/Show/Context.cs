namespace Show
{
    public class Context
    {
        private IState _state;

        public Context()
        {
            _state = new SleepState();
        }

        public void SetState(IState state)
        {
            _state = state;
        }

        public void Request()
        {
            _state.Handle(this);
        }
    }
}