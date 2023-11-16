[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

The **Adaptee** *class*
```
Adaptee
```
which uses the *inteface* **ITarget**
```
: ITarget
```
Add the required method **GetRequest()** add at the top:
```
private readonly Adaptee _adaptee;

public Adapter(Adaptee adaptee)
{
    _adaptee = adaptee;
}
```

Explanation: Adapter makes Adaptee's interface compatible with the ITarget interface.




[page 5](./page05.md)
