[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

At **main**
We have a **Demo**
```
DisplayUnit display1 = new DisplayUnit("Living Room");
DisplayUnit display2 = new DisplayUnit("Bedroom");
DisplayUnit display3 = new DisplayUnit("Kitchen");

weatherStation.addObserver(display1);
weatherStation.addObserver(display2);
weatherStation.addObserver(display3);

 weatherStation.setTemperature(77); // Simulate a temperature change

        // Some humorous output
System.out.println("God of Weather: The weather has changed!");
weatherStation.setTemperature(78);

weatherStation.removeObserver(display2);

System.out.println("Meteorologist: Display in the Bedroom is malfunctioning!");
weatherStation.setTemperature(72);
```



[page 6](./page06.md)
