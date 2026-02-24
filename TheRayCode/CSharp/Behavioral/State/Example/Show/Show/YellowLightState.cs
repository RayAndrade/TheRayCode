namespace Show
{
    public class YellowLightState: ITrafficLightState
    {
        public void Change(TrafficLight light)
        {
            light.SetState(new RedLightState());
        }

        public string GetState()
        {
            return "Yellow Light";
        }
    }
}