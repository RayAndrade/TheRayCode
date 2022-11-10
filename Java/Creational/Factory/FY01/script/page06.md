[back](./page05.md)

Now we create a *public class* called **OperatingSystemFactory**.

it will have the following code:
```java

public OS getInstance(int str) {
   if(Objects.equals(str, 1)){
        return new Android();
    } else if(Objects.equals(str, 2)) {
        return new IOS();
    } else if(Objects.equals(str, 3)){
        return new Windows();
    } else
    return null;
}

```

we will need to import:
```java

import systems.OS;
import systems.Android;
import systems.IOS;
import systems.Windows;

import java.util.Objects;

```
[page 7](./page07.md)
