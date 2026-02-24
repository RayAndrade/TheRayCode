using System.Collections.Generic;

namespace Show
{
    public class WeatherStation
    {
        private List<IWeatherObserver> observers;
        private float temperature;
        private float humidity;
        private float pressure;

        public WeatherStation()
        {
            observers = new List<IWeatherObserver>();
        }

        public void RegisterObserver(IWeatherObserver observer)
        {
            observers.Add(observer);
        }

        public void RemoveObserver(IWeatherObserver observer)
        {
            observers.Remove(observer);
        }

        public void NotifyObservers()
        {
            foreach (var observer in observers)
            {
                observer.Update(temperature, humidity, pressure);
            }
        }

        public void SetMeasurements(float temperature, float humidity, float pressure)
        {
            this.temperature = temperature;
            this.humidity = humidity;
            this.pressure = pressure;
            NotifyObservers();
        }
    }
}