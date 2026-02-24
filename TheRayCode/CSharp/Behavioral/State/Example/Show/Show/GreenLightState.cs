namespace Show
{
    public class GreenLightState: ITrafficLightState
    {
        public void Change(TrafficLight light)
        {
            light.SetState(new YellowLightState());
        }

        public string GetState()
        {
            return "Green Light";
        }
    }
}