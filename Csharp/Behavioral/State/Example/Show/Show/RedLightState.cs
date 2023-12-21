namespace Show
{
    public class RedLightState: ITrafficLightState
    {
        public void Change(TrafficLight light)
        {
            light.SetState(new GreenLightState());
        }

        public string GetState()
        {
            return "Red Light";
        }
    }
}