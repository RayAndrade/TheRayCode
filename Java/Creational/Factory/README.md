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

Next, we'll create the classes for the different types of pets that implement the Pet interface. We'll start with **Bird**:

```java
package TheRayCode.Factory;

public class Bird implements Pet {
    @Override
    public String getType() {
        return "I am a bird.";
    }
}
```

[script](./script/page01.md)

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
