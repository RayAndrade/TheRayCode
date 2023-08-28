# TheRayCode
## Adapter Factory java

Our goal is to put a roung peg in a 5 cm radius round hole, two Square holes with widths 2 cm and 20 cm.
To our orject we create three packages: **adapters**, **round** and **square**.

We start with our **RoundPeg** and we place it in the **round** package.
**RoundPegs** are compatible with **RoundHoles**.

**RoundPeg class**:

Represents pegs that have a round shape.
Contains an attribute radius that determines the size of the peg.
Provides a constructor to set the radius and a method to get the radius.
```java
public class RoundPeg {
    private double radius;

    public RoundPeg() {}

    public RoundPeg(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }
}
```
**RoundHoles** are compatible with **RoundPegs**.
To the **round** package we also add the class **RoundHole**

**RoundHole class**:

Represents holes that have a round shape.
Contains an attribute radius that determines the size of the hole.
Provides a constructor to set the radius, a method to get the radius, and a method fits() that checks if a given round peg can fit into the hole.

```java
public class RoundHole {
    private double radius;

    public RoundHole(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }

    public boolean fits(RoundPeg peg) {
        boolean result;
        result = (this.getRadius() >= peg.getRadius());
        return result;
    }
}
```


The **SquarePegs** are not compatible with **RoundHoles**. 
But we have to integrate them into our program.

**RoundHole class**:

Represents holes that have a round shape.
Contains an attribute radius that determines the size of the hole.
Provides a constructor to set the radius, a method to get the radius, and a method fits() that checks if a given round peg can fit into the hole.

To the **square** package we add the following:
```
public class SquarePeg {
    private double width;

    public SquarePeg(double width) {
        this.width = width;
    }

    public double getWidth() {
        return width;
    }

    public double getSquare() {
        double result;
        result = Math.pow(this.width, 2);
        return result;
    }
}
```

Now let's create a **SquarePegAdapter** *class* and put it in the **adapters** package.

**SquarePeg** class:

Represents pegs that have a square shape.
Contains an attribute width that determines the size of the square peg.
Provides a constructor to set the width, a method to get the width, and a method getSquare() that calculates the area of the square peg.

```c
import TheRayCode.Adapter.round.RoundPeg;
import TheRayCode.Adapter.square.SquarePeg;

public class SquarePegAdapter extends RoundPeg {
    private SquarePeg peg;

    public SquarePegAdapter(SquarePeg peg) {
        this.peg = peg;
    }

    @Override
    public double getRadius() {
        double result;
        // Calculate a minimum circle radius, which can fit this peg.
        result = (Math.sqrt(Math.pow((peg.getWidth() / 2), 2) * 2));
        return result;
    }
}
```
We now put this all together in the **main** method in our **Demo** *class*.

**Demo class**:

Demonstrates the use of the Adapter Design Pattern.
Starts by demonstrating that round pegs fit into round holes.
Attempts to show that square pegs don't fit into round holes directly.
Introduces an adapter (SquarePegAdapter, whose code isn't provided) to make square pegs compatible with round holes.
Demonstrates that with the use of the adapter, we can check if square pegs fit into round holes.

```
import TheRayCode.Adapter.adapters.SquarePegAdapter;
import TheRayCode.Adapter.round.RoundHole;
import TheRayCode.Adapter.round.RoundPeg;
import TheRayCode.Adapter.square.SquarePeg;

public class Demo {
    public static void main(String[] args) {
        // Round fits round, no surprise.
        RoundHole hole = new RoundHole(5);
        RoundPeg rpeg = new RoundPeg(5);
        if (hole.fits(rpeg)) {
            System.out.println("Round peg r5 fits round hole r5.");
        }

        SquarePeg smallSqPeg = new SquarePeg(2);
        SquarePeg largeSqPeg = new SquarePeg(20);
        // hole.fits(smallSqPeg); // Won't compile.

        // Adapter solves the problem.
        SquarePegAdapter smallSqPegAdapter = new SquarePegAdapter(smallSqPeg);
        SquarePegAdapter largeSqPegAdapter = new SquarePegAdapter(largeSqPeg);
        if (hole.fits(smallSqPegAdapter)) {
            System.out.println("Square peg w2 fits round hole r5.");
        }
        if (!hole.fits(largeSqPegAdapter)) {
            System.out.println("Square peg w20 does not fit into round hole r5.");
        }
    }
}
```
From the provided code, the SquarePegAdapter class (which is not included in the code snippet) presumably adapts a square peg to be used with a round hole. This adapter might determine the equivalent diameter of the square peg if it were a circle, probably by using the diagonal of the square as its diameter.

The demo then demonstrates how round pegs naturally fit into round holes. However, for square pegs, an adapter is used to check if they fit into the round holes.

The expected output of the Demo class, when run, will be:

```run
Round peg r5 fits round hole r5.
Square peg w2 fits round hole r5.
Square peg w20 does not fit into round hole r5.
```
The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Adapter_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/TheRayCode/)

[The Ray Code](https://www.TheRayCode.com)

[Ray Andrade](https://www.TheRayCode.org)
