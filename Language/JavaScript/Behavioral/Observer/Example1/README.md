# TheRayCode
## Observer pattern java

In this example, the Observer pattern establishes indirect collaboration between objects of a text editor. Each time the Editor object changes, it notifies its subscribers. EmailNotificationListener and LogOpenListener react to these notifications by executing their primary behaviors.

Subscriber classes aren’t coupled to the editor class and can be reused in other apps if needed. The Editor class depends only on the abstract subscriber interface. This allows adding new subscriber types without changing the editor’s code.

We create a package called **listeners** and in that package we create an **interface** called **interface**.
```java
import java.io.File;

public interface EventListener {
    void update(String eventType, File file);
}
```

To the package called **listeners** we add the class file call **EmailNotificationListener**.
This class *implements* **EventListener**.

```java
import java.io.File;

public class EmailNotificationListener implements EventListener {
    private String email;

    public EmailNotificationListener(String email) {
        this.email = email;
    }

    @Override
    public void update(String eventType, File file) {
        System.out.println("Email to " + email + ": Someone has performed " + eventType + " operation with the following file: " + file.getName());
    }
}
```

We also add another class file called **LogOpenListener**.
**LogOpenListener** also *implements* the **EventListener** interface.
```java
import java.io.File;

public class LogOpenListener implements EventListener {
    private File log;

    public LogOpenListener(String fileName) {
        this.log = new File(fileName);
    }

    @Override
    public void update(String eventType, File file) {
        System.out.println("Save to log " + log + ": Someone has performed " + eventType + " operation with the following file: " + file.getName());
    }
}
```



We creater a package called **editor** and in this package we place a class called **Editor** in there. 


```java
import java.io.File;

public class Editor {
    public EventManager events;
    private File file;

    public Editor() {
        this.events = new EventManager("open", "save");
    }

    public void openFile(String filePath) {
        this.file = new File(filePath);
        events.notify("open", file);
    }

    public void saveFile() throws Exception {
        if (this.file != null) {
            events.notify("save", file);
        } else {
            throw new Exception("Please open a file first.");
        }
    }
}
```
![Observer](/UMLs/images/Observer/Observer-3.jpg)
We create another package called **publisher**. In this package we place a class file called the **EventManager**.

```java
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class EventManager {
    Map<String, List<EventListener>> listeners = new HashMap<>();

    public EventManager(String... operations) {
        for (String operation : operations) {
            this.listeners.put(operation, new ArrayList<>());
        }
    }

    public void subscribe(String eventType, EventListener listener) {
        List<EventListener> users = listeners.get(eventType);
        users.add(listener);
    }

    public void unsubscribe(String eventType, EventListener listener) {
        List<EventListener> users = listeners.get(eventType);
        users.remove(listener);
    }

    public void notify(String eventType, File file) {
        List<EventListener> users = listeners.get(eventType);
        for (EventListener listener : users) {
            listener.update(eventType, file);
        }
    }
}
```
Let's put this altogether in a class we call **Demo**.
```java
import TheRayCode.observer.example.editor.Editor;
import TheRayCode.observer.example.listeners.EmailNotificationListener;
import TheRayCode.observer.example.listeners.LogOpenListener;

public class Demo {
    public static void main(String[] args) {
        Editor editor = new Editor();
        editor.events.subscribe("open", new LogOpenListener("/path/to/log/file.txt"));
        editor.events.subscribe("save", new EmailNotificationListener("admin@example.com"));

        try {
            editor.openFile("test.txt");
            editor.saveFile();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```

When we compile and run, we get.
```run
Save to log /path/to/log/file.txt: Someone has performed open operation with the following file: test.txt
Email to admin@example.com: Someone has performed save operation with the following file: test.txt
```

[Wikipedia](https://en.wikipedia.org/wiki/Observer_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
