# TheRayCode
## Abstract Factory Java

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which the subclasses of this *family* can cooperate together.

The first thing I want to create is a package for our **buttons**. 
After doing that I create an interface called **Button** with the following code.
```java
public interface Button {
  void paint();
}
```

This interface requires the **paint** method.
The first button we add will be **MacOSButton**:

```java
public class MacOSButton implements Button{
    @Override
    public void paint() {
        System.out.println("You have created MacOSButton.");
    }
}
```
Now let's add another button to our group.
This time I will add a *Windows* button called **WindowsButton**.
It's implementation look like:
```java
public class WindowsButton implements Button {
    @Override
    public void paint() {
        System.out.println("You have created WindowsButton.");
    }
}
```
For the sake of the demo we will all another type of widget to our factory, we will add checkboxes.
Let't first add a package for the checkboxes we call **checkboxes**.
To this package we will add an interface for the checkboxes we all **Checkbox**.
The code for this interface is just:
```java
public interface Checkbox {
    void paint();
}
```
We create a couple of class objects to add to this package.
The first one we create will be for the Mac OS naned **MacOSCheckbox**:
```java
public class MacOSCheckbox implements Checkbox {
    @Override
    public void paint() {
        System.out.println("You have created MacOSCheckbox.");
    }
}
```
We create another class for Windows

