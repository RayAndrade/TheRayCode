Say you want to create a *factory* of multiple multiple classes. If they have same *interface* then we can create a fatory
that can istanciate each of those classes. In our example we have 3 types of OSes: *Android*, *IOS* and *Windows*.
These are 3 classes and we will place under one interface that we call **OS**.

Our goal is to hide the logic of creating such objects from the user. 

Let's start with creating a static main method in a class we call **Demo**
```java
public static void main(String[] args) { }
```

First we create a package we call **systems**. 
In this paclage  we create an interface we call **OS**.
Here is the method we will require of each OS using this interface:
```java
void spec();
```
Let's create an **OS** type class we call **Android**. **Android** will implment the **OS** *interface*. 

We start with **Android**
```java
implements OS
```



Implment the **spec** method. (un check overrid)
we add some code:
```java
public void spec() {
    System.out.println("The Ray Code supports Android");
}
```
Note uncheck Insert @Override


We create another class we call **IOS** and it to is extended with **OS**.

```java
implements OS
```

```java
public void spec() {
    System.out.println("The Ray Code supports IOS");
}
```
we create another class called **Windows**. Here is some code.
```java
public void spec() {
    System.out.println("Windows is proprietary software");
}
```

Now we goto **Demo** and in **main** we place some code.
```java
public static void main(String args[]) {
    OS obj = new Android();
    obj.spec();
}
```
When we run it now we can see the creteion of the **Android** object.
But if we want to create other opereathing systems we have to recompile this project and create another class

Now create a class called **OperatingSytemFactory**.
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
We add the imports required

```java


```
Now we go to the **Demo** class
Clear out any imports
```java
import systems.OperatingSytemFactory;
```


```java
OperatingSytemFactory osf = new OperatingSytemFactory();
osf.getInstance("Android").spec();
osf.getInstance("IOS").spec();
osf.getInstance("any other").spec();
```
Our output shoud be
```demo
The Ray Code supports Android
The Ray Code supports IOS
Windows is proprietary software
```
