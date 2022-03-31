Let's start with creating a static main method in a class we call **FactoryMain**
```java
public static void main(String[] args) { }
```
Let's create a package we call **phone**, in this paclage  we create an interface we call **OS**.
Here is the method we require.
```java
void spec();
```
Let's create an **OS** type class we call **Android**.**Android** will implment the **OS** *interface*. 
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
we create a class and add some code.
```java
@Override
public void spec() {
    System.out.println("Window is proprietary software");
}
```

now we goto **FactoryMain** and in **main** we place some code.
```java
public static void main(String args[]) {
    OS obj = new Android();
    obj.spec();
}
```
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







































