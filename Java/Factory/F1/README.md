In this artical we will examine the **Factory** design pattern.

Say you want to create a *factory* of multiple multiple classes. If they have same *interface* then we can create a fatory
that can istanciate each of those classes. In our example we have 3 types of OSes: *Android*, *IOS* and *Windows*.
These are 3 classes and we will place under one interface that we call **OS**.

Let's start with creating a static main method in a class we called **Demo**
```java
public class Demo {
    public static void main(String[] args) {
        System.out.println("The Ray Code is AWESOME!!!");
    }
}
```
For this demonastration, we create a package called **systems**.

We need to create an interface to harness our products. We call this interface **OS**. It have a method requirement called **spec()**
```java
package systems;

public interface OS {
    void spec();
}
```

Our first opetating system will be called **Android**. **Android** will *implement* the **OS** *interface*.

```java
package systems;

public class Android implements OS{
    public void spec() {
        System.out.println("The Ray Code supports Android");
    }
}
```

The next class we add will be for **IOS**. **IOS** will also *implement* the **OS** *interface*.

```java
package systems;

public class IOS  implements OS{
    public void spec() {
        System.out.println("The Ray Code supports IOS");
    }
}
```

Next we'll create a handle for **Windows**.
```java
package systems;

public class Windows  implements OS{
    public void spec() {
        System.out.println("Windows is proprietary software");
    }
}
```
Now if we go to main, we can add code like:
```
OS obj = new Android();
obj.spec();
```

be we want to create a factory that will create any one of these OS classes.

We add a class called **OperatingSytemFactory** to our **systems** package. This package will switch on demand the desired **OS**.
here is our code.

We add some code
```java
public OS getInstance(String str){
    if(str.equals("Android")){
        return new Android();
    } else if(str.equals("IOS")){
        return new IOS();
    } else
        return new Windows();
}
```
now we go to our main class **Demo** and repalace the code with
```java
OperatingSytemFactory osf = new OperatingSytemFactory();
osf.getInstance("Android").spec();
osf.getInstance("IOS").spec();
osf.getInstance("any other").spec();
```

Now when we compile and run we get:

```run
The Ray Code supports Android
The Ray Code supports IOS
Windows is proprietary software
```
