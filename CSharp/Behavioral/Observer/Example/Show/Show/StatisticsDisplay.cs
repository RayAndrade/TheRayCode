using System;

namespace Show
{
    public class StatisticsDisplay: IWeatherObserver
    {
        private float maxTemp = 0.0f;
        private float minTemp = 100.0f;
        private float tempSum= 0.0f;
        private int numReadings;
        
        public void Update(float temperature, float humidity, float pressure)
        {
            tempSum += temperature;
            numReadings++;

            if (temperature > maxTemp)
            {
                maxTemp = temperature;
            }

            if (temperature < minTemp)
            {
                minTemp = temperature;
            }

            Display();
        }
        
        public void Display()
        {
            Console.WriteLine("Avg/Max/Min temperature = " + (tempSum / numReadings)
                                                           + "/" + maxTemp + "/" + minTemp);
        }
    }
}