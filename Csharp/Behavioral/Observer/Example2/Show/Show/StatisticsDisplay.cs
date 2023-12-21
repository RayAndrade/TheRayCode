using System;
using System.Collections.Generic;
using System.Linq;

namespace Show
{
    public class StatisticsDisplay: IWeatherObserver
    {
        private List<float> temperatureHistory = new List<float>();
        private List<float> humidityHistory = new List<float>();
        private List<float> pressureHistory = new List<float>();
        
        public void Update(float temperature, float humidity, float pressure)
        {
            temperatureHistory.Add(temperature);
            humidityHistory.Add(humidity);
            pressureHistory.Add(pressure);
            Display();
        }
        
        private float CalculateAverage(List<float> values)
        {
            return values.Average();
        }

        private float CalculateMax(List<float> values)
        {
            return values.Max();
        }

        private float CalculateMin(List<float> values)
        {
            return values.Min();
        }

        public void Display()
        {
            Console.WriteLine("Statistics Display:");
            Console.WriteLine($" - Avg/Max/Min temperature: {CalculateAverage(temperatureHistory)}F/{CalculateMax(temperatureHistory)}F/{CalculateMin(temperatureHistory)}F");
            Console.WriteLine($" - Avg/Max/Min humidity: {CalculateAverage(humidityHistory)}%/{CalculateMax(humidityHistory)}%/{CalculateMin(humidityHistory)}%");
            Console.WriteLine($" - Avg/Max/Min pressure: {CalculateAverage(pressureHistory)}hPa/{CalculateMax(pressureHistory)}hPa/{CalculateMin(pressureHistory)}hPa");
        }
    }
}