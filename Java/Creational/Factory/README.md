# TheRayCode is AWESOME!!!

**Factory**

**[Java](../README.md)** 

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**Java Creational Patterns**

 * **[Top](../README.md)**
 
 **Java Factory Design Pattern**

 [Code for the Show](Show/)

Let's start by creating an interface for the types of pets. We'll call it **Pet**.

```java
package TheRayCode.Factory;

public interface Pet {
    String getType();
}

```

We start with the Pet interface

```java
package TheRayCode.Factory;

public interface Pet {
    String getType();
}
```
The we create the **Bird** class

```java
package TheRayCode.Factory;

public class Bird implements Pet {
    @Override
    public String getType() {
        return "I am a bird.";
    }
}
```

Now let's create a **Cat**

```java
package TheRayCode.Factory;

public class Cat implements Pet {
    @Override
    public String getType() {
        return "I am a cat.";
    }
}
```

... and a **Dog** class.

```java
package TheRayCode.Factory;

public class Dog implements Pet {
    @Override
    public String getType() {
        return "I am a dog.";
    }
}
```
We put it all together in a **PetFactory**.

```java
package TheRayCode.Factory;

public class PetFactory {
    public Pet createPet(String type) {
        if (type.equals("bird")) {
            return new Bird();
        } else if (type.equals("dog")) {
            return new Dog();
        } else if (type.equals("cat")) {
            return new Cat();
        } else {
            throw new IllegalArgumentException("Unknown pet type: " + type);
        }
    }
}
```
So in Main
```
package TheRayCode.Factory;

public class Main {
    public static void main(String[] args) {
        PetFactory factory = new PetFactory();

        Pet bird = factory.createPet("bird");
        System.out.println(bird.getType()); // Output: I am a bird.

        Pet dog = factory.createPet("dog");
        System.out.println(dog.getType()); // Output: I am a dog.

        Pet cat = factory.createPet("cat");
        System.out.println(cat.getType()); // Output: I am a cat.
    }
}
```
and when we run this :

```
I am a bird.
I am a dog.
I am a cat.
```


[script](./script/page01.md)

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
