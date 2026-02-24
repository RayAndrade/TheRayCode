[up](../README.md)

For a spooky twist on the Visitor design pattern, let's conjure up a scenario involving a haunted house visited by various types of ghosts, each evoking a different eerie reaction from the house itself. This example will illustrate the Visitor pattern's power in enabling distinct operations (in this case, spooky occurrences) based on the type of object (ghost) visiting, all without altering the original classes.

### Step 1: Ghost Interface

**Ghost.java**
```java
public interface Ghost {
    void haunt(HauntedHouse house);
}
```
This interface represents any ghost that can visit and haunt the house, declaring a `haunt` method for interacting with the haunted house.

### Step 2: Concrete Ghost Classes

**Poltergeist.java**
```java
public class Poltergeist implements Ghost {
    @Override
    public void haunt(HauntedHouse house) {
        house.react(this);
    }
}
```

**WailingSpirit.java**
```java
public class WailingSpirit implements Ghost {
    @Override
    public void haunt(HauntedHouse house) {
        house.react(this);
    }
}
```

**ShadowFigure.java**
```java
public class ShadowFigure implements Ghost {
    @Override
    public void haunt(HauntedHouse house) {
        house.react(this);
    }
}
```
These classes embody different spectral entities, each with its haunting method.

### Step 3: HauntedHouse Interface

**HauntedHouse.java**
```java
public interface HauntedHouse {
    void react(Poltergeist poltergeist);
    void react(WailingSpirit spirit);
    void react(ShadowFigure shadow);
}
```
This interface declares a reaction method for each type of ghostly visitor.

### Step 4: Concrete Haunted House

**CreepyManor.java**
```java
public class CreepyManor implements HauntedHouse {

    @Override
    public void react(Poltergeist poltergeist) {
        System.out.println("Objects start flying across the room!");
    }

    @Override
    public void react(WailingSpirit spirit) {
        System.out.println("Eerie wails fill the air, sending shivers down your spine.");
    }

    @Override
    public void react(ShadowFigure shadow) {
        System.out.println("A shadow passes by the corner of your eye, but nothing is there when you look.");
    }
}
```
This spooky abode (`CreepyManor`) responds to each type of ghost in a manner that's sure to chill visitors to their core.

### Step 5: Main Class

**Main.java**
```java
public class Main {
    public static void main(String[] args) {
        Ghost[] ghosts = new Ghost[]{
                new Poltergeist(),
                new WailingSpirit(),
                new ShadowFigure()
        };

        CreepyManor manor = new CreepyManor();
        for (Ghost ghost : ghosts) {
            ghost.haunt(manor);
        }
    }
}
```
Here, an array of `Ghost` objects visits `CreepyManor`, each triggering its own uniquely terrifying reaction.

### Order of Creation
1. **Ghost.java**: Define the ghost interface.
2. **HauntedHouse.java**: Define the haunted house interface for reactions.
3. **Poltergeist.java**, **WailingSpirit.java**, **ShadowFigure.java**: Implement the concrete ghost classes.
4. **CreepyManor.java**: Implement the concrete haunted house with scary reactions.
5. **Main.java**: Demonstrate the pattern with these haunting interactions.

### Expected Output When Running the Code
The output will be a series of spooky events occurring in the manor:
```
Objects start flying across the room!
Eerie wails fill the air, sending shivers down your spine.
A shadow passes by the corner of your eye, but nothing is there when you look.
```

This haunted example showcases the Visitor pattern's capability to facilitate different interactions (spooky reactions, in this case) based on the object's type visiting a structure, while preserving the principle that classes should be open for extension but closed for modification.
