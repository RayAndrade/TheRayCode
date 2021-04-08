# TheRayCode
## Adapter Factory java

Our goal is to put a roung peg in a 5 inch radious round hole, 2 Square holes with widths 2 inches and 20 inches.
To our oriject we add three packages **adapters**, **round** and **square**.

We start with our **RoundPeg** and we place it in the **round** package.
**RoundPegs** are compatible with **RoundHoles**.
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
![Factory](/UMLs/images/Adaptee-3.jpg)

SquarePegs are not compatible with RoundHoles (they were implemented by previous development team). 
But we have to integrate them into our program.
To the **square** package we add:
```c#
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
Now let create a **SquarePegAdapter** *class* and put it in the **adapters** package.
```c#
import TheRayCode.adapter.example.round.RoundPeg;
import TheRayCode.adapter.example.square.SquarePeg;

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
We put this all together the **main** method in a **Demo** *class*.

```C#
import TheRayCode.adapter.example.adapters.SquarePegAdapter;
import TheRayCode.adapter.example.round.RoundHole;
import TheRayCode.adapter.example.round.RoundPeg;
import TheRayCode.adapter.example.square.SquarePeg;

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
Let's compile and run we should get:
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

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
