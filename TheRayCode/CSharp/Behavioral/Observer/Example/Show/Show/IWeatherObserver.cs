namespace Show
{
    public interface IWeatherObserver
    {
        void Update(float temperature, float humidity, float pressure);
    }
}