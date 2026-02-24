[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

Create **class WeatherStation**
```
WeatherStation
```
To keep tract of events```
```
private List<WeatherObserver> observers = new ArrayList<>();
```
Because we have **ArrayList** we need
```
import java.util.ArrayList;
import java.util.List;
```
At the top..

Next we will use an intger for **temperature**
```
private int temperature;
```
Let's **addObserver**
```
public void addObserver(WeatherObserver observer) {
    observers.add(observer);
}
```
We will also need to be able to **removeObserver**
```
public void removeObserver(WeatherObserver observer) {
        observers.remove(observer);
}
```
Next to **setTemperature**
```
public void setTemperature(int temperature) {
    this.temperature = temperature;
    notifyObservers();
}
```
And to **notifyObservers**
```
private void notifyObservers() {
    for (WeatherObserver observer : observers) {
        observer.update(temperature);
    }
}
```
We will loop thru the **subscribed users**

[page 3](./page03.md)
