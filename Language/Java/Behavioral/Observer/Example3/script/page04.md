[home](./page01.md) | [back](./page03.md) | [next](./page05.md)
Next we create **class**
```
DisplayUnit
```
which
```
 implements WeatherObserver
```
So it needes the **update method**

At the top we have
```
private String name;

public DisplayUnit(String name) {
    this.name = name;
}
```
and we add
```
System.out.println(name + ": It's getting hot in here! Current temperature: " + temperature + "°F");
```
next

[page 5](./page05.md)
