[top](../README.md)

Creating a Java example for the Facade design pattern involves several steps. First, let's define what the Facade pattern is: It's a structural design pattern that provides a simplified interface to a complex system of classes, library, or framework. The Facade doesn't encapsulate the complex system but delegates the client requests to the appropriate objects within the system.

For this example, let's consider a home theater system where the Facade simplifies the operation of various components like the amplifier, tuner, DVD player, CD player, and projector.

### Step 1: Define the Component Classes

We'll create individual classes for each component of the home theater system. Here's an example for two of them:

#### 1. Amplifier.java
```java
public class Amplifier {
    public void on() {
        System.out.println("Amplifier on");
    }

    public void setVolume(int level) {
        System.out.println("Setting volume to " + level);
    }

    // Additional methods here
}
```

#### 2. DvdPlayer.java
```java
public class DvdPlayer {
    public void on() {
        System.out.println("DVD Player on");
    }

    public void play(String movie) {
        System.out.println("Playing \"" + movie + "\"");
    }

    // Additional methods here
}
```

### Step 2: Create the Facade Class

#### HomeTheaterFacade.java
```java
public class HomeTheaterFacade {
    private Amplifier amp;
    private DvdPlayer dvd;

    public HomeTheaterFacade(Amplifier amp, DvdPlayer dvd) {
        this.amp = amp;
        this.dvd = dvd;
    }

    public void watchMovie(String movie) {
        System.out.println("Get ready to watch a movie...");
        amp.on();
        amp.setVolume(5);
        dvd.on();
        dvd.play(movie);
    }

    // Additional methods to simplify other operations
}
```

### Step 3: Main Class to Demonstrate the Code

#### Main.java
```java
public class Main {
    public static void main(String[] args) {
        Amplifier amp = new Amplifier();
        DvdPlayer dvd = new DvdPlayer();

        HomeTheaterFacade homeTheater = new HomeTheaterFacade(amp, dvd);
        homeTheater.watchMovie("Inception");
    }
}
```

### Order of Creation
1. Create individual component classes (`Amplifier.java`, `DvdPlayer.java`, etc.).
2. Create the `HomeTheaterFacade.java` class.
3. Create the `Main.java` class to demonstrate usage.

### Expected Terminal Output
When you run the `Main.java`, you should see:
```
Get ready to watch a movie...
Amplifier on
Setting volume to 5
DVD Player on
Playing "Inception"
```

This example demonstrates the Facade pattern by providing a simplified interface to the complex subsystem of a home theater. The facade (`HomeTheaterFacade`) handles the complex interactions between the subsystems (`Amplifier`, `DvdPlayer`), making it easier for the client (represented by `Main.java`) to use the system.
