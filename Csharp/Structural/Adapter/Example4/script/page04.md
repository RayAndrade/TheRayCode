[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Create **class**
```
Adapter
```
which is of type **ITarget**
```
: ITarget
```
we use **ITarget** interface to make the **AdaptER** compatable with the **AdaptEE** 

at the top we add code:
```
private readonly Adaptee _adaptee;

public Adapter(Adaptee adaptee)
{
    _adaptee = adaptee;
}
```
to setup our Adapter and to
```
return $"This is '{_adaptee.GetSpecificRequest()}'";
```





[page 5](./page05.md)
