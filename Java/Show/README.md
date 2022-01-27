# TheRayCode
## Prototype pattern java

Let’s take a look at how the Prototype can be implemented without the *standard Cloneable* interface.

The first thing we do is create a package to place our class files.
The name of this *package* will be **shapes**.

Insice of this this package **shapes** we add an *interface* we call **Shape**.
**Shape** will be an *abstract class*.
Here is the code

```java
public abstract class Shape {
    public int x;
    public int y;
    public String color;

    public Shape() {
    }


    public Shape(Shape target) {
        if (target != null) {
            this.x = target.x;
            this.y = target.y;
            this.color = target.color;
        }
    }

    public abstract Shape clone();
   
    public boolean equals(Object object) {
        if (!(object instanceof Shape)) return false;
        Shape shape = (Shape) object;
        return shape.x == x && shape.y == y && Objects.equals(shape.color, color);
    }

}
```
Now let's create a couple of shapes. 
First we will create a **Circle** class oblect. 
Cirle will be exteded by the **Shape** *abstract class*.
We add the unimplemented method


```java
public class Circle extends Shape{

    @Override
    public Shape clone() {
        return null;
    }
}
```
We add:
```java
public int radius;
public Circle() {
}
public Circle(Circle target) {
    super(target);
    if (target != null) {
        this.radius = target.radius;
    }
}

```
And we replace the *return null* with:
```java
return new Circle(this);
```

Let's create a Rectangle object












the red error line tells us we ne







When we extend the class with the **Shape**, we need to add the unimplemented method **clone()**
```java
public class Circle extends Shape{
}
```
We will add some code to the clone() method:
```java
return new Circle(this);
```
we add a **radius** varable;
```java
public int radius;
```
now let's add code to initialize the circle

```java

    public int radius;
    public Circle() {
    }
    public Circle(Circle target) {
        super(target);
        if (target != null) {
            this.radius = target.radius;
        }
    }
}

```


And for the **Rectangle** the code is:
```java
public class Rectangle extends Shape {
    public int width;
    public int height;
    public Rectangle() {
    }
    public Rectangle(Rectangle target) {
        super(target);
        if (target != null) {
            this.width = target.width;
            this.height = target.height;
        }
    }
    @Override
    public Shape clone() {
        return new Rectangle(this);
    }
    @Override
    public boolean equals(Object object2) {
        if (!(object2 instanceof Rectangle) || !super.equals(object2)) return false;
        Rectangle shape2 = (Rectangle) object2;
        return shape2.width == width && shape2.height == height;
    }
}
```

Lastly we put this all into *static void main* method we place in the **Demo** class file.
It's code looks like:
```java
public class Demo {
    public static void main(String[] args) {
        System.out.println("hello");
        List<Shape> shapes = new ArrayList<>();
        List<Shape> shapesCopy = new ArrayList<>();
        Circle circle = new Circle();
        circle.x = 10;
        circle.y = 20;
        circle.radius = 15;
        circle.color = "red";
        shapes.add(circle);
        Circle anotherCircle = (Circle) circle.clone();
        shapes.add(anotherCircle);
        Rectangle rectangle = new Rectangle();
        rectangle.width = 10;
        rectangle.height = 20;
        rectangle.color = "blue";
        shapes.add(rectangle);
        cloneAndCompare(shapes, shapesCopy);
    }

    private static void cloneAndCompare(List<Shape> shapes, List<Shape> shapesCopy) {
        for (Shape shape : shapes) {
            shapesCopy.add(shape.clone());
        }
        for (int i = 0; i < shapes.size(); i++) {
            if (shapes.get(i) != shapesCopy.get(i)) {
                System.out.println(i + ": Shapes are different objects (yay!)");
                if (shapes.get(i).equals(shapesCopy.get(i))) {
                    System.out.println(i + ": And they are identical (yay!)");
                } else {
                    System.out.println(i + ": But they are not identical (booo!)");
                }
            } else {
                System.out.println(i + ": Shape objects are the same (booo!)");
            }
        }
    }
}
```

Compile and run.
You should get the following result:
```
hello
0: Shapes are different objects (yay!)
0: And they are identical (yay!)
1: Shapes are different objects (yay!)
1: And they are identical (yay!)
2: Shapes are different objects (yay!)
2: And they are identical (yay!)
```
The Ray Code is AWESOME!!! (tell a freiend)

[Wikipedia](https://en.wikipedia.org/wiki/Prototype_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
