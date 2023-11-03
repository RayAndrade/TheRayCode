[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

create the interface **Visitor.php**
```
Visitor
```
An interface that declares visit methods for all types of visitable components. It ensures that each Visitor implementation has methods to handle both ComponentA and ComponentB.
```
public function visitComponentA(ComponentA $element): void;
public function visitComponentB(ComponentB $element): void;
```

[page 6](./page06.md)
