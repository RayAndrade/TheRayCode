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
System.out.println("Click! Button says - 'The Ray Code is AWESOME!!!'");
```
Let's create anothor class we call **WindowsButton** and we will use the java sqing library.
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
Let's also add some **JFrame** elements
```java
JPanel panel = new JPanel();
JFrame frame = new JFrame();
JButton button;
```
Next for the methods we just created, for the  **onClick** method
```java
button = new JButton("Exit");
button.addActionListener(new ActionListener() {
    public void actionPerformed(ActionEvent e) {
       frame.setVisible(false);
       System.exit(0);
    }
});
```
and for the **render** method we have
```java
frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
JLabel label = new JLabel("The Ray Code is AWESOME!!!");
label.setOpaque(true);
label.setBackground(new Color(235, 233, 126));
label.setFont(new Font("Dialog", Font.BOLD, 44));
label.setHorizontalAlignment(SwingConstants.CENTER);
panel.setLayout(new FlowLayout(FlowLayout.CENTER));
frame.getContentPane().add(panel);
panel.add(label);
onClick();
panel.add(button);

frame.setSize(320, 200);
frame.setVisible(true);
onClick();
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
import buttons.Button;
```
The code for this *abstrac class* will have the method **renderWindow**
```java
public void renderWindow() {
// ... other code ...
   Button okButton = createButton();
   okButton.render();
}
```
Subclasses will override this method in order to create specific button  objects.
```java
public abstract Button createButton();

```

The HTML Dialog will produce HTML buttons.
```java
public class HtmlDialog extends Dialog { }
```
We implment the missing method

```java
@Override
public Button createButton() {
    return null;
}
```
We repace the *return null* in the **createButton** method with
```java
return new HtmlButton();
```
And we need to import the **HtmlButton class**

```java
import buttons.HtmlButton;
```

Now let's create the **WindowsDialog**.
The imports we will need
```java
import buttons.Button;
import buttons.WindowsButton;
```
We extend the **WindowsDialog** with **Dialog**
```java
extends Dialog
```

Implment **createButton**.
We get the generated code
```java
@Override
public Button createButton() {
    return null;
}
```
here are the imports we will need
```java
import buttons.Button;
import buttons.WindowsButton;
```
we replace the *return null;* with.


```java
return new WindowsButton();
```
Our last class to create will be the **Demo** class
The imports we will need
```java
import factory.Dialog;
import factory.HtmlDialog;
import factory.WindowsDialog;
```
Let's have a static local varable we call **dialog**.
```java
private static Dialog dialog;
```

So we can change back and forth we create a static method we call **configure**
```java
static void configure() {
    if (System.getProperty("os.name").equals("Linux"))
    // if (System.getProperty("os.name").equals("Windows 10")) 
    {
         dialog = new WindowsDialog();
    } else {
        dialog = new HtmlDialog();
    }
}
```
All of the client code should work with factories and products through abstract interfaces. 
This way it does not care which factory it works with and what kind of product it returns.

We add
```java
static void runBusinessLogic() {
    dialog.renderWindow();
}
```
and lastly for our **main** method we have

```java
public static void main(String[] args) {
    configure();
    runBusinessLogic();
}
```

