[back](./page01.md)




First we create a package we call systems. In this paclage we create an interface we call OS. Here is the method we will require of each OS using this interface:

void spec();
Let's create an OS type class we call Android. Android will implment the OS interface.

We start with Android

implements OS
Implment the spec method. (un check overrid) we add some code:

public void spec() {
    System.out.println("The Ray Code supports Android");
}
Note uncheck Insert @Override

We create another class we call IOS and it to is extended with OS.

implements OS
public void spec() {
    System.out.println("The Ray Code supports IOS");
}
we create another class called Windows. Here is some code.

public void spec() {
    System.out.println("Windows is proprietary software");
}
<<<<<<< HEAD Now we goto FactoryMain and in static main method we place some code.
Now we goto Main and in main we place some code.

8fb668b9 (Java/Creational/Factory)

public static void main(String args[]) {
    OS obj = new Android();
    obj.spec();
}
When we run it now we can see the creteion of the Android object. But if we want to create other opereathing systems we have to recompile this project and create another class

Now create a class called OperatingSytemFactory. We add some code

public OS getInstance(String str){
    if(str.equals("Android")){
        return new Android();
    } else if(str.equals("IOS")){
        return new IOS();
    } else
        return new Windows();
}
We add the imports required

Now we go to the Demo class Clear out any imports

import systems.OperatingSytemFactory;
OperatingSytemFactory osf = new OperatingSytemFactory();
osf.getInstance("Android").spec();
osf.getInstance("IOS").spec();
osf.getInstance("any other").spec();
Our output shoud be

The Ray Code supports Android
The Ray Code supports IOS
Windows is proprietary software


[page 3](./page03.md)
