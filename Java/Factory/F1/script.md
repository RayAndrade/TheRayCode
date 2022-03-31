Say you have multiple classes that are of the same type, they have the same *interface*. In our example we have Android, IOS and Window
are 3 classes we will place under one interface we call **OS**.
Our goal is to hide the logic of creating such objects from the user. In this example we will the Factory nethod from design patterns.

Let's start with creating a static main method in a class we call **FactoryMain**
```java
public static void main(String[] args) { }
```
Let's create a package we call **phone**, in this paclage  we create an interface we call **OS**.
Here is the method we will require by this interface.
```java
void spec();
```
Let's create an **OS** type class we call **Android**. **Android** will implment the **OS** *interface*. 
```java
implements OS
```
Implment the **spec** method.
we add some code:
```java
@Override
public void spec() {
    System.out.println("The Ray Code supports Android");
}
```

We create another class we call **IOS** and it to is extended with **OS**.
```java
@Override
public void spec() {
    System.out.println("The Ray Code supports IOS");
}
```
we create another class called **Windows**. Here is some code.
```java
@Override
public void spec() {
    System.out.println("Windows is proprietary software");
}
```

Now we goto **FactoryMain** and in **main** we place some code.
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
import phone.OS;
import phone.Android;
import phone.IOS;
import phone.Windows;
```
Now we go to the **FactoryMain** class
```java
OperatingSytemFactory osf = new OperatingSytemFactory();
// OS obj = osf.getInstance("Android");
// OS obj = osf.getInstance("IOS");
OS obj = osf.getInstance("any junk");
obj.spec();
```
demo each option

