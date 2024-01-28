public class DisplayUnit implements WeatherObserver  {

    private String name;

    public DisplayUnit(String name) {
        this.name = name;
    }

    @Override
    public void update(int temperature) {
        System.out.println(name + ": It's getting hot in here! Current temperature: " + temperature + "°C");
    }
}
