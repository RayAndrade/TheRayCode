public class DisplayUnit implements WeatherObserver  {

    private String name;

    public DisplayUnit(String name) {
        this.name = name;
    }

    @Override
    public void update(int temperature) {
        string phrase = "";
        switch(temperature)
            case temperature < 72):(phrase. = "";);

        System.out.println(name + ": It's getting hot in here! Current temperature: " + temperature + "°F");
    }
}
