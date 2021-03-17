# TheRayCode
## Factory Design Pattern using Java

We start this demonstation with the goal to make two differnt systems render a *button*.
One system will render simple html text and the other system we create will be for a *java*.**awt** and *javax*.**swing** systems. (We call this system a '*windows*' system).

We start off by creating the Java namespaces we need for this project.
We create a package called *buttons* and another one called *factory*
In the buttons package we create an interface we call **Button**.
Here is the code for the interface: 

```java
public interface Button {
    void render();
    void onClick();
}
```
As you can see, the requirements to use this interface is to include the two methods **render** and **onClick**

The first button we create will be for Html buttons. 
The name of this class will be **HtmlButton**.
**HtmlButton** needs to implement **Button**.
Because it is implementing **Button** we need to include a **render** method and an **onClick** our code looks like:

```java
public class HtmlButton implements Button {

    public void render() {
        System.out.println("<button>Test Button</button>");
        onClick();
    }

    public void onClick() {
        System.out.println("Click! Button says - 'Hello World!'");
    }
}
```
So now let's create the same method using the awt/swing libraries. The code for this version will be:

```java
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Windows button implementation.
 */
public class WindowsButton implements Button {
    JPanel panel = new JPanel();
    JFrame frame = new JFrame();
    JButton button;

    public void render() {
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JLabel label = new JLabel("Hello World!");
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
    }

    public void onClick() {
        button = new JButton("Exit");
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                frame.setVisible(false);
                System.exit(0);
            }
        });
    }
}
```
Now let's turn to the factory side of our project.
In the factory package we should have some core business that should group together.
We create an *abstract class* we call *Dialog* this will be our code:
```java

public abstract class Dialog {

    public void renderWindow() {
        Button okButton = createButton();
        okButton.render();
    }

    /**
     * Subclasses will override this method in order to create specific button
     * objects.
     */
    public abstract Button createButton();
}

```
We now define how our styles run.
For the HTML side I write the following:
```java
public class HtmlDialog extends Dialog {

   @Override
   public Button createButton() {
      return new HtmlButton();
   }
}
```
And for our *window* side we write:
```java
public class WindowsDialog extends Dialog {

   @Override
   public Button createButton() {
      return new WindowsButton();
   }
}

```
Now let's put this all together in our **Demo**.java program.
This is the code:
```java

public class Demo {
    private static Dialog dialog;

    public static void main(String[] args) {
        configure();
        runBusinessLogic();
    }

    /**
     * The concrete factory is usually chosen depending on configuration or
     * environment options.
     */


    static void configure() {
    // use 1 or 2 to run

        switch(2) {
            case 1:
                dialog = new WindowsDialog();
                break;
            case 2:
                dialog = new HtmlDialog();
                break;
            default:
                // exit code block
        }
    }

    /**
     * All of the client code should work with factories and products through
     * abstract interfaces. This way it does not care which factory it works
     * with and what kind of product it returns.
     */
    static void runBusinessLogic() {
        dialog.renderWindow();
    }
}
```

Be good and happy programming


[Wikipedia](https://en.wikipedia.org/wiki/Factory_method_pattern/)

![Factory](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Factory.png)
----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


