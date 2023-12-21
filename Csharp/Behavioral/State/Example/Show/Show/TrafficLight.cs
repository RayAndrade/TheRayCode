namespace Show
{
    public class TrafficLight
    {
        private ITrafficLightState _state;

        public TrafficLight(ITrafficLightState initialState)
        {
            _state = initialState;
        }

        public void SetState(ITrafficLightState state)
        {
            _state = state;
        }

        public void Change()
        {
            _state.Change(this);
        }

        public string GetState()
        {
            return _state.GetState();
        }
    }
}