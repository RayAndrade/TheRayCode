# TheRayCode
## Abstract Factory Java

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

The first thing I want to create is a package for our **buttons**.
To the **buttons** we add the **Button** interface with the following code.
```java
public interface Button {
  void paint();
}
```

This interface requires the **paint** method.
The first button we create will be **MacOSButton**:

```java
public class MacOSButton implements Button{
    @Override
    public void paint() {
        System.out.println("You have created MacOSButton.");
    }
}
``` 










