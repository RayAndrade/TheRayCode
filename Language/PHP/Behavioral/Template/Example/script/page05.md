[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

**Class2.php:**

```
Class2
```

Class1: There's an error in the naming here. It should be **Class2** instead of Class1. 

```
 extends AbstractClass
```

This is the second concrete implementation of AbstractClass.
**requiredOperations1() and requiredOperation2()**: This class provides the required implementations for these two abstract methods.

**hook1()**: This method overrides the default hook1 method in AbstractClass to provide a customized behavior.

**requiredOperations1**
```
echo "ConcreteClass2 says: Implemented Operation1<br/>";
```

**requiredOperation2**
```
echo "ConcreteClass2 says: Implemented Operation2<br/>";
```

**hook1**
```
protected function hook1(): void
{
    echo "ConcreteClass2 says: Overridden Hook1<br/>";
}
```


[page 6](./page06.md)
