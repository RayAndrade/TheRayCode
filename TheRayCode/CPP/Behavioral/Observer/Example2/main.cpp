#include "WeatherStation.h"
#include "CatDisplay.h"

int main() {
    std::shared_ptr<WeatherStation> weatherStation = std::make_shared<WeatherStation>();
    std::shared_ptr<CatDisplay> catDisplay = std::make_shared<CatDisplay>();

    weatherStation->attach(catDisplay);

    std::cout << "Weather Station Simulator:" << std::endl;
    weatherStation->setTemperature(30); // It's too hot, I'm gonna nap in the shade.
    weatherStation->setTemperature(5);  // Too cold, I refuse to move from this warm spot.
    weatherStation->setTemperature(20); // Perfect for a lazy stroll and a quick hunt.

    return 0;
}
