namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            WeatherStation weatherStation = new WeatherStation();

            CurrentConditionsDisplay currentDisplay = new CurrentConditionsDisplay();
            StatisticsDisplay statisticsDisplay = new StatisticsDisplay();

            weatherStation.RegisterObserver(currentDisplay);
            weatherStation.RegisterObserver(statisticsDisplay);

            weatherStation.SetMeasurements(80, 65, 30.4f);
            weatherStation.SetMeasurements(82, 70, 29.2f);
        }
    }
}