[back](./page06.md)

Now let's go to the *main* method in **FactoryMain**

```java

int os = 0;
OperatingSystemFactory osf = new OperatingSystemFactory();

```
This requires the following:
```java
 import systems.OS;
```

we continue
```java
OS obj = null;
```
requires the following:
```java
 import systems.OS;
```

we also want the user to select which type of OS to support
```java

  Scanner scan= new Scanner(System.in);
  
```
needs

```java
import java.util.Scanner;

```
and we add a while loop for our demo

```java

while(os == 0) {
    System.out.println("Select 1 for Android, 2 for IOS, 3 for Windows or 4 to exit");
    os = scan.nextInt();
    switch (os) {
        case 1:
            obj = osf.getInstance(1);
            break;
        case 2:
            obj = osf.getInstance(2);
            break;
        case 3:
            obj = osf.getInstance(3);
            break;
        case 4:
            obj = osf.getInstance(4);
            break;
    }
    if(obj != null){obj.spec();}
    else {break;}
    os = 0;
}

```
[page 8](./page08.md)
