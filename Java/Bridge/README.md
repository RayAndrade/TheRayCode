# TheRayCode
## Bridge pattern java

Let's create a package we will call **builder**.
Inside this pacage we add the we add the *interface* **Builder**.
The **Builder** *interface* defines all possible ways to configure a product.
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

We need to start with the components that make a car.
We ce
Each car need an engin.
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
Let's add another feature. 
We put it in the **components** package
Just another feature of a car.
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
![Bride Pattern](https://raw.githubusercontent.com/RayAndrade/TheRayCode/main/UMLs/images/Bridge/Bridge-3.png)
<br/>
we also need a **Transmission** and for our project we make it an *enum*.
Let's also add that to comonents
```java
public enum Transmission {
    SINGLE_SPEED, MANUAL, AUTOMATIC, SEMI_AUTOMATIC
}
```



[Wikipedia](https://en.wikipedia.org/wiki/Bridge_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
