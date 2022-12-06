
Say you want to create a factory of multiple multiple classes. 
If they have same interface then we can create a fatory that can istanciate each of those classes. 
In our example we have 3 types of OSes: Android, IOS and Windows. 
These are 3 classes and we will place under one interface that we call OS.

Our goal is to hide the logic of creating such objects from the user.


Let's start with creating a static main method in a class we call **FactoryMain**

```java
public static void main(String[] args) { 
    System.out.println("The Ray Code is AWESOME!!!");
}

```


[page 2](./page02.md)
