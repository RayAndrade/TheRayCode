namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var light = new Light();
            var lightOn = new LightOnCommand(light);
            var lightOff = new LightOffCommand(light);

            var remote = new RemoteControl();

            remote.SetCommand(lightOn);
            remote.PressButton(); // Output: Light is on

            remote.SetCommand(lightOff);
            remote.PressButton(); // Output: Light is off
        }
    }
}