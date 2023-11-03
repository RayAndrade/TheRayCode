[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

**ComponentB.php**
```
ComponentB
```
**ComponentB**: Similarly to **ComponentA**, it also implements the Component interface. 

Its accept method redirects the call to the visitor's visitComponentB method.
**specialMethodOfComponentB**(): A unique method to the ComponentB class which returns the string "B".

```
 implements Component
```
for **accept**
```
$visitor->visitComponentB($this);
```
and we add:
```
public function specialMethodOfComponentB(): string
{
    return "B";
}
```


[page 5](./page05.md)
