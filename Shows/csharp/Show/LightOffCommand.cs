namespace Show
{
    public class LightOffCommand: ICommand
    {
        private Light _light;

        public LightOffCommand(Light light)
        {
            _light = light;
        }
        
        public void Execute()
        {
            _light.TurnOff();
        }
    }
}