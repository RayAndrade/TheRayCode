package TheRayCode.builder.builders;

import TheRayCode.builder.cars.Type;
import TheRayCode.builder.components.Engine;
import TheRayCode.builder.components.GPSNavigator;
import TheRayCode.builder.components.Transmission;
import TheRayCode.builder.components.TripComputer;
/**
 * Builder interface defines all possible ways to configure a product.
 */
public interface Builder {
    void setType(Type type);
    void setSeats(int seats);
    void setEngine(Engine engine);
    void setTransmission(Transmission transmission);
    void setTripComputer(TripComputer tripComputer);
    void setGPSNavigator(GPSNavigator gpsNavigator);
}