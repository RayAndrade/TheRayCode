We start by creating a package we call **buttons**. 
Next we place an interface we create we call **Button** in that package.
```java
public interface Button {
    void render();
    void onClick();
}
```
Our first button will be the **HtmlButton**. Let's implement this class with the **Button** interface.
```java
public class HtmlButton implements Button { }
```
the code for the **render** will be
```java
System.out.println("<button>Test Button</button>");
onClick();
```
And for the onClick method we have
```java
System.out.println("Click! Button says - 'Hello World!'");
```
Let's create anoteth but that will use the java sqing library
This button also implements the **Button** interface
```java
public class WindowsButton implements Button { }
```
This class will need the following librarys
```java
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
```
 The code for the OnClick method is
```java
button = new JButton("Exit");
button.addActionListener(new ActionListener() {
    public void actionPerformed(ActionEvent e) {
       frame.setVisible(false);
       System.exit(0);
    }
});
```
Now let's create a factory for our buttons. 
The name of the pacakage we create is **factory**
Note that "factory" is merely a role for the class. 
It should have some core business logic which needs different products to be created.
We start by creating the *abstract* class Dialog 
```java
public abstract class Dialog { }
```
Let's take care of our imports
```java
import refactoring_guru.factory_method.example.buttons.Button;
import refactoring_guru.factory_method.example.buttons.HtmlButton;
```
The HTML Dialog will produce HTML buttons.
```java
public class HtmlDialog extends Dialog { }
```














































