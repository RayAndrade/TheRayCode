# TheRayCode
## Builder java

In this example, the Builder pattern allows a step by step construction of various car models.
The example also shows how Builder produces can make different kinds cars using the same `building` steps.

The **Director** controls the order of the construction. It knows which building steps to call to produce this or that car model. It works with builders only via their common interface. 
This allows the passing of different types of builders to the *director*.
The end result is retrieved from the builder object because the director can’t know the type of resulting product. 
Only the Builder object knows what does it build exactly.

Let's start with an interface we call **Builder**.
We place this interface the a *package* we also create called **builders**.
The Builder interface defines all possible ways to configure a product.
Here is the code:
```java
public interface Builder {
    void setType(Type type);
    void setSeats(int seats);
    void setEngine(Engine engine);
    void setTransmission(Transmission transmission);
    void setTripComputer(TripComputer tripComputer);
    void setGPSNavigator(GPSNavigator gpsNavigator);
}
```
Let's create another package we call **components**.
In **components** we will place the *components* need to maka car.
The **components** will be **Engine**, **Transmission**, **TripComputer** and **GPSNavigator**.
The code for those componets will be:

For **Engine** we have:
```java
public class Engine {
    private final double volume;
    private double mileage;
    private boolean started;

    public Engine(double volume, double mileage) {
        this.volume = volume;
        this.mileage = mileage;
    }

    public void on() {
        started = true;
    }

    public void off() {
        started = false;
    }

    public boolean isStarted() {
        return started;
    }

    public void go(double mileage) {
        if (started) {
            this.mileage += mileage;
        } else {
            System.err.println("Cannot go(), you must start engine first!");
        }
    }

    public double getVolume() {
        return volume;
    }

    public double getMileage() {
        return mileage;
    }
}
```
Next we create an say what type of transmission the car has.
```java
public enum Transmission {
    SINGLE_SPEED, MANUAL, AUTOMATIC, SEMI_AUTOMATIC
}
```

Let's also look at **TripComputer**.
The code for it will be:
```java
public class TripComputer {

    private Car car;

    public void setCar(Car car) {
        this.car = car;
    }

    public void showFuelLevel() {
        System.out.println("Fuel level: " + car.getFuel());
    }

    public void showStatus() {
        if (this.car.getEngine().isStarted()) {
            System.out.println("Car is started");
        } else {
            System.out.println("Car isn't started");
        }
    }
}
```

Let's also add a **GPSNavigator** for good measure.
the code for the **GPSNavigator** is:
```java
public class GPSNavigator {
    private String route;

    public GPSNavigator() {
        this.route = "1234 Main Street Anywhere, USA 10011";
    }

    public GPSNavigator(String manualRoute) {
        this.route = manualRoute;
    }

    public String getRoute() {
        return route;
    }
}
```
Let's create a package called **cars**.
In **cars**



The Ray code is AWESOME!!!
----------------------------------------------------------------------------------------------------

[wikipedia](https://en.wikipedia.org/wiki/Builder_pattern)

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


