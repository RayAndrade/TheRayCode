[New Project]
give a name to the [opendk] project. [Next] ->

Create project from template [Next]

Give the project a name.

Base packarge is *com.theraycode*

[Finish]

```java
System.out.println("The Ray Code is AWESOME!!!");
```


The first thing I want to create is a package for our button objects called **buttons**. 

New *Java class* > *Interface* > name *Button*

add code:

```Java
void paint();
```

New *Java class* > *Class* > name *MacOSButton*

extend the class:

```Java
implements Button
```

add implmented methods

```java
@Override
public void paint() {

}
```

add code
```java
System.out.println("You have created MacOSButton.");
```


New *Java class* > *Class* > name *WindowsButton*

extend the class:

```Java
implements Button
```

add implmented methods

```java
@Override
public void paint() {

}
```

add code
```java
System.out.println("You have created WindowsButton.");
```
__________________________________________________________


Next we create a package for our application objects called **factory** for our factories.

New *Java class* > *Interface* > named *GUIFactory*

add code:

```Java
import TheRayCode.Show.buttons.Button;
import TheRayCode.Show.checkboxes.Checkbox;
```

and inside this class we add:

```java
Button createButton();
Checkbox createCheckbox();
```
New *Java class* > *Class* > name *MacOSFactory*

extend the class:

```Java
implements GUIFactory
```

add implmented methods

```java
@Override
public Button createButton() {
    return null;
}

@Override
public Checkbox createCheckbox() {
    return null;
}
```
imports needed:

```java
import TheRayCode.Show.buttons.MacOSButton;
import TheRayCode.Show.checkboxes.MacOSCheckbox;
```

replace the *return null*s with:

```java
return new MacOSButton();
```
and
```java
return new MacOSCheckbox();
```

Do the same for *Windows*


New *Java class* > *Class* > name *WindowsFactory*

extend the class:

```Java
implements GUIFactory
```

add implmented methods

```java
@Override
public Button createButton() {
    return null;
}

@Override
public Checkbox createCheckbox() {
    return null;
}
```

replace the *return null*s with:

```java
System.out.println("You have created WindowsCheckbox.");
```
__________________________________________________________


create new pacage:

```java
TheRayCode.Show.app
```

to *app* I add the *class* **Application**

add the *imports*
```java
import TheRayCode.Show.buttons.Button;
import TheRayCode.Show.checkboxes.Checkbox;
import TheRayCode.Show.factory.GUIFactory;
```

add the code:
```java
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

```

next we go to Main

```java
import TheRayCode.Show.app.Application;
import TheRayCode.Show.factory.GUIFactory;
import TheRayCode.Show.factory.MacOSFactory;
import TheRayCode.Show.factory.WindowsFactory;
```

we add the following code:

```java
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
```
 and then we add to the **main**

```java
Application app = configureApplication();
app.paint();
```

compile and run you should get:

```run
You have created WindowsButton.
You have created WindowsCheckbox.
```

add a **not** and get:

```run
You have created MacOSButton.
You have created MacOSCheckbox.
```







































