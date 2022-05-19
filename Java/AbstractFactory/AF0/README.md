# TheRayCode
## Abstract Factory Java

In this article we will review the *Abstract Factory* pattern.
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
We create another class for Windows side  **WindowsCheckbox**. The code for that is:
```java
public class WindowsCheckbox implements Checkbox {
    @Override
    public void paint() {
        System.out.println("You have created WindowsCheckbox.");
    }
}
```
Now let's create a *factory* to harness both these button and checkbox classes.
So we create a interface called **GUIFactory**.
The code for that will be:
```java
public interface GUIFactory {
    Button createButton();
    Checkbox createCheckbox();
}
```
For the **MacOSFactory** we have:
```java
public class MacOSFactory implements GUIFactory {
    @Override
    public Button createButton() {
        return new MacOSButton();
    }

    @Override
    public Checkbox createCheckbox() {
        return new MacOSCheckbox();
    }
}
```
For the **WindowsFactory** we have.
```java
public class WindowsFactory implements GUIFactory {
    @Override
    public Button createButton() {
        return new WindowsButton();
    }

    @Override
    public Checkbox createCheckbox() {
        return new WindowsCheckbox();
    }
}
```
Create an app package and place in it a class called **Application**. 
The code for this class is:
```java
public class Application {
    private Button button;
    private Checkbox checkbox;

    public Application(GUIFactory factory) {
        button = factory.createButton();
        checkbox = factory.createCheckbox();
    }

    public void paint() {
        button.paint();
        checkbox.paint();
    }
}
```
The last class will be called **Demo**.
The code for this class will be:

public class Demo {

    /**
     * Application picks the factory type and creates it in run time (usually at
     * initialization stage), depending on the configuration or environment
     * variables.
     */
    private static Application configureApplication() {
        Application app;
        GUIFactory factory;
        String osName = System.getProperty("os.name").toLowerCase();
        if (osName.contains("mac")) {
            factory = new MacOSFactory();
            app = new Application(factory);
        } else {
            factory = new WindowsFactory();
            app = new Application(factory);
        }
        return app;
    }

    public static void main(String[] args) {
        Application app = configureApplication();
        app.paint();
    }
}


your result should be

```
You have created WindowsButton.
You have created WindowsCheckbox.
```



[Wikipedia](https://en.wikipedia.org/wiki/Abstract_factory_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


















