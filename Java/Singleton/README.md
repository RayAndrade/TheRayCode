# TheRayCode
## Singleton pattern java

In software engineering, the singleton pattern is a software design pattern that restricts the instantiation of a class to one "single" instance. 
This is useful when exactly one object is needed to coordinate actions across the system. The term comes from the mathematical concept of a singleton.
The Singleton is a creational design pattern, which ensures that only one object of its kind exists and provides a single point of access to it for any other code.
The key idea in this pattern is to make the class itself responsible for controlling its instantiation (that it is instantiated only once).

 Singleton can be recognized by a static creation method, which returns the same cached object.
```java
 public final class Singleton {
    private static Singleton instance;
    public String value;

    private Singleton(String value) {
        // The following code emulates slow initialization.
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        }
        this.value = value;
    }

    public static Singleton getInstance(String value) {
        if (instance == null) {
            instance = new Singleton(value);
        }
        return instance;
    }
}
```

Let's see how this works by creating a **main** method we put in our **Demo** class.
 
```java
 public class Demo {
    public static void main(String[] args) {
        System.out.println("If you see the same value, then singleton was reused (yay!)" + "\n" +
                "If you see different values, then 2 singletons were created (booo!!)" + "\n\n" +
                "RESULT:" + "\n");
        Singleton singleton = Singleton.getInstance("FOO");
        Singleton anotherSingleton = Singleton.getInstance("BAR");
        System.out.println(singleton.value);
        System.out.println(anotherSingleton.value);
    }
}
```
 When we compile and run we should get.
```run
 If you see the same value, then singleton was reused (yay!)
If you see different values, then 2 singletons were created (booo!!)

RESULT:

FOO
FOO
```
We se that there was only one class..

A lot of developers consider the Singleton pattern an antipattern. That’s why its usage is on the decline in Java code.

[Wikipedia](https://en.wikipedia.org/wiki/Singleton_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
