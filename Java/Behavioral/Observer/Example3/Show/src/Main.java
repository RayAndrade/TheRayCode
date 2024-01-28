public class Main {
    public static void main(String[] args) {
        WeatherStation weatherStation = new WeatherStation();

        DisplayUnit display1 = new DisplayUnit("Living Room");
        DisplayUnit display2 = new DisplayUnit("Bedroom");
        DisplayUnit display3 = new DisplayUnit("Kitchen");

        weatherStation.addObserver(display1);
        weatherStation.addObserver(display2);
        weatherStation.addObserver(display3);

        weatherStation.setTemperature(25); // Simulate a temperature change

        // Some humorous output
        System.out.println("God of Weather: The weather has changed!");
        weatherStation.setTemperature(30);

        weatherStation.removeObserver(display2);

        System.out.println("Meteorologist: Display in the Bedroom is malfunctioning!");
        weatherStation.setTemperature(28);

    }
}