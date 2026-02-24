namespace Show
{
    public interface ITrafficLightState
    {
        void Change(TrafficLight light);
        string GetState();
    }
}